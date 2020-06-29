#include <iostream>
using namespace std;
class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack(int size) {
	this->size = size;
	tos = -1;
	p = new int[size];
}
MyIntStack::MyIntStack(const MyIntStack& s) {
	size = s.size;
	tos = s.tos;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = s.p[i];
}
MyIntStack::~MyIntStack() {
	delete[] p;
}
bool MyIntStack::push(int n) {
	if (tos + 1 == size)
		return false;
	p[++tos] = n;
	return true;

}
bool MyIntStack::pop(int& n) {
	if (tos - 1 <= -1)
		return false;
	n = p[tos--];
	return true;

}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}