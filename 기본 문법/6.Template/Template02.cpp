#include <iostream>
using namespace std;
template <class T>
void test(T a, T b) { // 둘다 타입이 T이기 때문에 같은 자료형으로 변환되어야한다.
	cout << a << endl;
	cout << b << endl;
}
int main() {
	//test(13, 3.9); ERROR
	test(3.9, 4.5); // NOT ERROR 
}