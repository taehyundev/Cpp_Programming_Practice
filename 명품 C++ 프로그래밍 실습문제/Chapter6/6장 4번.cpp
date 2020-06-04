#include <iostream>
using namespace std;
class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void print();
};
MyVector::MyVector(int n=100, int val=0) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++)mem[i] = val;
}
void MyVector::print() {
	for (int i = 0; i < size; i++) cout << mem[i] << ' ';
	cout << endl;
}
int main() {
	MyVector m, m1(50, 3);
	m.print();
	m1.print();
}