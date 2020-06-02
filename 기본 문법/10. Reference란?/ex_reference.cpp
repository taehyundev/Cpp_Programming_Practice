#include <iostream>
using namespace std;

int main() {
	//Reference
	int num;
	int& n = num;
	n = 100;
	cout << n << ", " << num << endl;
	
	int* p = &n;
	*p = 12;
	
	cout << n << ", " << num << endl;
	//공유됨 n 과 num의 주소가
}
