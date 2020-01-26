#include <iostream>
using namespace std;

class Queue {
private:
	//Main variables
	int data[10000];
	int size;
	int back;
	int front;
public:
	void push(int n); // Insert
	int pop(); // Front Remove
	int frontF(); //Front Infor
	int backF(); //Back Infor
	int sizeF(); //size 
	bool Empty(); //Empty Discrimination
	Queue();


};

//Constructor
Queue::Queue() :size(0), back(-1), front(-1) {}

//push Func /NOT values = -1
void Queue::push(int n) {
	if (front == -1) {
		front++;
	}
	back++;
	data[back] = n;
	size++;

}

//pop Func /NOT values = -1
int Queue::pop() {
	if (size == 0) {
		return -1;
	}
	return size-- > 0 ? data[front++] : -1;
}

//front Func
int Queue::frontF() {
	return size > 0 ? data[front] : -1;
}

//back Func
int Queue::backF() {
	return size > 0 ? data[back] : -1;
}

//size F
int Queue::sizeF() {
	return size < 0 ? size = 0 : size;
}

//Empty true = 1 false = 0
bool Queue::Empty() {
	return size < 1 ? 0 : 1;
}
 
int main() {
	Queue q;
	q.push(4);
	q.push(17);
	q.push(40);
	q.push(85);
	cout << "Push : 4, 17, 40, 85" << endl << endl << "FIFO" << endl;
	cout << "pop : " << q.pop() << endl;
	cout << "pop : " << q.pop() << endl;
	cout << "Front : " << q.frontF() << endl;
	cout << "Back : " << q.backF() << endl;
	cout << "Size : " << q.sizeF() << endl;
	cout << "Empty : " << q.Empty() << endl; // Value's Not Null = 1 Null =0
	cout << "pop : " << q.pop() << endl;
	cout << "pop : " << q.pop() << endl;
	cout << "Empty : " << q.Empty() << endl;
}
