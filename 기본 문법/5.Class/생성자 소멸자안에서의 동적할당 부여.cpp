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


//delete[] 와 delete의 차이
/*
	delete 배열 1개 삭제
	delete[] 배열의 크기를 상관하지않고 삭제
*/

//선언부

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