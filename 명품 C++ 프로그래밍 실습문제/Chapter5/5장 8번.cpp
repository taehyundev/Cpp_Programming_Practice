#include<iostream>
#include<cstring>
using namespace std;

class MyIntStack {
    int* p; // 스택 메모리로 사용할 포인터 
    int size; // 스택의 최대 크기 
    int tos; // 스택의 탑을 가리키는 인덱스 
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s); // 복사 생성자 
    ~MyIntStack();
    bool push(int n); // 정수 n을 스택에 푸시한다.
        // 스택이 꽉 차 있으면 false를, 아니면 true 리턴 
    bool pop(int& n); // 스택의 탑에 있는 값을 n에 팝한다.
        // 만일 스택이 비어 있으면 false를, 아니면 true 리턴 
};
MyIntStack::MyIntStack(int size) {
    this->size = size;
    p = new int[size];
    tos = -1;
}

MyIntStack::MyIntStack(const MyIntStack& s) {
    this->size = s.size;
    p = new int[s.size];
    tos = s.tos;
    for (int i = 0; i < s.tos; i++) {
        p[i] = s.p[i];
    }
}
bool MyIntStack::push(int n) {
    tos++;
    if (size+1 == tos) return  false;
    p[tos] = n;
    return true;
}
bool MyIntStack::pop(int& n) {
    if (tos == -1) return false;
    n = p[tos];
    tos--;
    return true;

}
MyIntStack::~MyIntStack() {
    delete [] p;
}
int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);

    MyIntStack b = a; // 복사 생성 

    b.push(30);

    int n;
    a.pop(n); // 스택 a 팝 
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n); // 스택 b 팝 
    cout << "스택 b에서 팝한 값 " << n << endl;
}
