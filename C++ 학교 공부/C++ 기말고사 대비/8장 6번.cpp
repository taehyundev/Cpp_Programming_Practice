#include <iostream>
using namespace std;
class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyStack:public BaseArray {
	int top;
public:
	MyStack(int size):BaseArray(size) { top = 0; }
	void push(int n);
	int pop();
	int length();
	int capacity();
};
void MyStack::push(int n) {
	put(top++, n);
}
int MyStack::pop() {
	return get(--top);
}
int MyStack::capacity() {
	return getCapacity();
}
int MyStack::length() {
	return top;
}
int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}
