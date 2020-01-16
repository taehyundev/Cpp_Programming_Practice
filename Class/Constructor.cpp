#include <iostream>
using namespace std;
class MyClass
{
public:
	MyClass();
	MyClass(int data);
	~MyClass();

private:
	int data;

};

MyClass::MyClass()
{
	cout << "start" << endl;
}
MyClass::MyClass(int data)
{
	this->data = data;
	cout << data<< endl;
}

MyClass::~MyClass()
{
	cout << "end" << endl;
}
int main() {
	MyClass c;
	MyClass c1(3);


}