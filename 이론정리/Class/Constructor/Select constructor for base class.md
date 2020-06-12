# Select constructor for base class

명시적인 기본 클래스의 생성자선택

```c++
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "생성자 A" << endl; }
    A(int x) {
        cout << "매개 변수 생성자 A" << x << endl;
    }
};
class B : public A {
public:
    B():A() { cout << "생성자 B" << endl; }
    B(int x):A(x) {
        cout << "매개 변수 생성자 B" << x << endl;
    }
};

int main() {
    B b(5);
}
/*
출력결과
매개 변수 생성자 A5
매개 변수 생성자 B5
*/
```

class B에서 생성자를 실행할떄 슈퍼클래스의 생성자를 넣어주게되면, A(int x) > B(int x) 순서로 생성자가 실행되게 된다.

