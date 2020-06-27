# Template

### what is the Template?

템플릿은 함수나 클래스를 일반화하기 위해서 주로 사용한다.

```c++
#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    cout << add(1,2); //3이 출력
    cout << add(1.1,2.2); //Error 발생
}
```

```c++
#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
double add(double a,double b){
    return a+b;
}
int main(){
    cout << add(1,2); //3이 출력
    cout << add(1.1,2.2); //3.3이 출력
}
```

근데 위와 같은 함수중복 형태를 template를 사용해 일반화 시킬 수 있다.

```c++
#include <iostream>
using namespace std;
template<class T>
T add(T a,T b){
    return a+b;
}
int main(){
    cout << add(1,2); //3이 출력
    cout << add(1.1,2.2); //3.3이 출력
}
```



