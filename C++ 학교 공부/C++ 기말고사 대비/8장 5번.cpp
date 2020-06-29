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
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}
