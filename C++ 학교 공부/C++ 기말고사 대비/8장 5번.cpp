#include <iostream>
using namespace std;
class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity=100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyQueue :public BaseArray{
	int front, rear;
public:
	MyQueue(int size) : BaseArray(size) {
		front = rear = 0;
	}
	void enqueue(int n);
	int dequeue();
	int capacity();
	int length();
};
void MyQueue::enqueue(int n) {
	put(rear,n);
	rear++;
}
int MyQueue::dequeue() {
	int n= get(front);
	front++;
	return n;
}
int MyQueue::capacity(){
	//cout << getCapacity();
	return getCapacity();
}
int MyQueue::length() {
	//front 2 rear 4
	// 2 3 4
	// (rear-front)+1
	return rear - front;
}

int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}
