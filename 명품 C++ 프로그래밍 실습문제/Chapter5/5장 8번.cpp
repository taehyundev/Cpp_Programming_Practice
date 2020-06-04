#include<iostream>
#include<cstring>
using namespace std;

class MyIntStack {
    int* p; // ���� �޸𸮷� ����� ������ 
    int size; // ������ �ִ� ũ�� 
    int tos; // ������ ž�� ����Ű�� �ε��� 
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s); // ���� ������ 
    ~MyIntStack();
    bool push(int n); // ���� n�� ���ÿ� Ǫ���Ѵ�.
        // ������ �� �� ������ false��, �ƴϸ� true ���� 
    bool pop(int& n); // ������ ž�� �ִ� ���� n�� ���Ѵ�.
        // ���� ������ ��� ������ false��, �ƴϸ� true ���� 
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

    MyIntStack b = a; // ���� ���� 

    b.push(30);

    int n;
    a.pop(n); // ���� a �� 
    cout << "���� a���� ���� �� " << n << endl;
    b.pop(n); // ���� b �� 
    cout << "���� b���� ���� �� " << n << endl;
}
