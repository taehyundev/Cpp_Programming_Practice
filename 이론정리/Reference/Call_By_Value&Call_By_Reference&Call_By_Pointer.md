# call by value / call by reference / call by pointer



* call by value(값에 의한 호출)

```c++
#include <iostream>
using namespace std;
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int m = 2, n = 3;
    swap(m, n);
    cout << m << ", " << n << endl;
}
/*
출력 결과 : 2, 3
swap함수를 호출했음에도 값이 변경되지않고, 그대로 2랑 3이 출력된다.
*/
```



* call by reference(참조에 의한 호출)

```c++
#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int m = 2, n = 3;
    swap(m, n);
    cout << m << ", " << n << endl;
}
/*
출력 결과 : 3, 2
swap함수를 호출됬을 때, m과 n을 "&"(레퍼런스 타입)으로 받기때문에 동일한 주소값을 참조한 변수가 생성되기떄문에
swap에서 값이 바뀐것이 main()에서 적용된다.
*/
```



* call by pointer(포인터에 의한 호출)

```c++
#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int m = 2, n = 3;
    swap(&m, &n);
    cout << m << ", " << n << endl;
}
/*
출력 결과 : 3, 2
swap함수를 호출됬을 때, m과 n의 주소값을 "*"(포인터 타입)으로 받기때문에 call by reference와 동일한 결과를 띄울 수 있게된다.
*/
```

