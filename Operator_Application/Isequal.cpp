#include <iostream>
using namespace std;
bool CompareTo(int n,int n1) {
	return (n == n1) ? true : false;
}
int main() {
	int n, n1;
	cin >> n >> n1;
	if (CompareTo(n, n1)) {

		cout << "equal";
	}
	else {
		cout << "Not equal";
	}

}