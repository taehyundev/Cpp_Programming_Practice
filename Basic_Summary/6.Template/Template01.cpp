#include <iostream>
using namespace std;
template <class T>
void test(T a) {
	cout << a<<endl;
}
int main() {
	test(13);
	test("aaaaasa");
	test(3.9);
}