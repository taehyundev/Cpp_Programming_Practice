#include <iostream>
using namespace std;
class Stack {
private:
	//Required Variable (Size, Top) << This Integer
	int Size;
	int Top = -1;
	int data[10];

public:
	int pop();
	void push(int val);
	bool empty();
	int sizeF();
	int topF();

	Stack();
	//~Stack();
};

//Constructor
Stack::Stack() :Top(-1), Size(0) {}

//push Function (push x).
void Stack::push(int val) {
	Size++;
	Top++;
	data[Top] = val;
}

//pop Function
int Stack::pop() {
	if (Top >= 0)	{Size--; }
	return Top < 0 ? -1: data[Top--]; 
}
//Top Display
int Stack::topF() {
	return Top < 0 ? -1:data[Top];
}
//Empty True : 1 | False:0
bool Stack::empty() {
	return Size > 0 ? true : false;
}
//Size Integer's number
int Stack::sizeF() {
	return Size;
}
int main() {
	//1 ~ 10000 action(n)
	Stack s;
	//Input : 3 5 7 9
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(9);
	cout << s.pop()<<endl;
	cout << s.pop() << endl;
	cout <<"TOP :" << s.topF() << endl; //현재 맨위의 TOP정보
	cout <<"SIZE : "<< s.sizeF() << endl; //스택안에있는 정수의 수
	cout << "EMPTY : " <<( s.empty() == true? 1 : 0) << endl; //비어있는지 확인 비어있으면 0 아니면 1
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << "EMPTY : " << (s.empty() == true ? 1 : 0) << endl;
	
	
}
