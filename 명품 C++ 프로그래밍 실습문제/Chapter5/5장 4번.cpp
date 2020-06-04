#include <iostream>
using namespace std;
bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;
	
	//else
	big = a > b ? a : b;
	return false;
}
int main() {
	int a, b, big;
	cout << "input >> ";
	cin >> a >> b;

	if (bigger(a, b, big)) {
		cout << "같습니다.";
	}
	else {
		cout << "큰수 : " << big << endl;
	}

}