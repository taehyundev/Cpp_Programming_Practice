// call_by_reference;
#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	*x = 2;
	*y = 3;
}
int main() {
	int a, b;
	cin >> a >> b;
	swap(&a, &b);
	cout << a << b;

}