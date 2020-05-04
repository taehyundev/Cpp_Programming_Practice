#include <iostream>
using namespace std;
class DynamicMalloc {
private:
	int* mem;
	int size;
public:
	DynamicMalloc(int size);
	~DynamicMalloc();
	void show();
}


//delete[] �� delete�� ����
/*
	delete �迭 1�� ����
	delete[] �迭�� ũ�⸦ ��������ʰ� ����
*/

//�����

DynamicMalloc::DynamicMalloc(int size) {
	mem = new int[size];
	this->size = size;
	for (int i = 0; i < size; i++) {
		cin >> mem[i];
	}
}
DynamicMalloc::~DynamicMalloc() {
	delete[] mem;
}
void DynamicMalloc::show() {
	for (int i = 0; i < size; i++) 
		cout << mem[i] << '\n'; 

}

int main() {
	DynamicMalloc m(5);
	m.show();
}