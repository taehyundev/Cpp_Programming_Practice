// call_by_value;
#include <iostream>
using namespace std;

void chan(int x, int y) {
	x = 2;
	y = 3;
}
int main() {
	int a, b;
	cin >> a >> b;
	chan(a, b); //not Change
	cout << a << b;

}