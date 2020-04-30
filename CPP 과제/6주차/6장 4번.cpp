#include  <iostream>
using namespace std;
class MyVector {
	int* mem;
	int size;
public:
	MyVector();
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show() { for (int i = 0; i < size; i++) cout << mem[i] << ' '; cout << endl; }

};

MyVector::MyVector() {
	mem = new int[100];
	size = 100;
	for (int i = 0; i < size; i++) mem[i] = 0;
}

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}
int main() {
	MyVector a, b(4, 5);
	a.show();
	b.show();
}