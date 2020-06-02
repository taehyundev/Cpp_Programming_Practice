#include <iostream>
using namespace std;
class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyQueue: BaseArray {
	int front;
	int rear;
public:
	MyQueue(int size) :BaseArray(size) { front=rear= 0; }
	void enqueue(int n) 
	{
		put(front, n);
		front++;
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return (front-rear);
	}
	int dequeue() {
		int dequeuevalue = get(rear);
		this->rear++;
		return dequeuevalue;
	}
};
int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť ������ 5���� ������ �Է��϶�>> ";
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