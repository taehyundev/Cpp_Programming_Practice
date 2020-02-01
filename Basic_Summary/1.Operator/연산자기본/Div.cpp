#include <iostream>
using namespace std;
int main() {
	int n, n1;
	cin >> n >> n1;
	int sum = n / n1; // type 1
	cout << sum;
	sum = n % n1; // type 2
	cout << sum;
}