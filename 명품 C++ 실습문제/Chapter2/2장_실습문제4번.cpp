#include <iostream>
using namespace std;
int main() {
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	double result=0;
	for (int i = 0; i < 5; i ++ ) {
		double x;
		cin >> x;
		if (result < x) result = x;
	}
	cout << "���� ū �� = " << result;
}