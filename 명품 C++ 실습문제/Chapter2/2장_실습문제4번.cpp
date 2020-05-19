#include <iostream>
using namespace std;
int main() {
	cout << "5 개의 실수를 입력하라>>";
	double result=0;
	for (int i = 0; i < 5; i ++ ) {
		double x;
		cin >> x;
		if (result < x) result = x;
	}
	cout << "제일 큰 수 = " << result;
}