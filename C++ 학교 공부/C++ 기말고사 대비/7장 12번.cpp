#include <iostream>
using namespace std;
class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+(SortedArray& op2);
	SortedArray& operator=(const SortedArray& op2);
	void show();
};
void SortedArray::sort() {
	for (int i = 0; i < size-1; i++) {
		for (int j = 1; j < size; j++) {
			if (p[j] < p[j - 1]) {
				int temp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = temp;
			}
		}
	}
}
SortedArray SortedArray::operator+(SortedArray& op2) {
	SortedArray temp;

	temp.size = this->size + op2.size;
	temp.p = new int[temp.size];
	int ref = 0;
	for (int i = 0; i < this->size; i++) {
		temp.p[ref] = this->p[i];
		ref++;
	}
	for (int i = 0; i < op2.size; i++) {
		temp.p[ref] = op2.p[i];
		ref++;
	}
	return temp;
}
SortedArray& SortedArray::operator=(const SortedArray& op2) {
	delete[] this->p;
	p = new int[op2.size];
	this->size = op2.size;
	for (int i = 0; i < size; i++) {
		p[i] = op2.p[i];
	}
	return *this;
}
SortedArray::SortedArray() { 
	size = 0;
	p = NULL;
}
SortedArray::SortedArray(SortedArray& src)
{
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = src.p[i];
}
SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++)
		this->p[i] = p[i];
}
SortedArray::~SortedArray() {
	if (p)
		delete[] p;
}
void SortedArray::show() {
	this->sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < this->size; ++i)
		cout << p[i] << ' ';
	cout << endl;
}

int main() {
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}