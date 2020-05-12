#include <iostream>
using namespace std;
int sum(int n, int m, int l) {
	return n + m + l;
}

int sum(int n, int m) {
	return n + m;
}

int sum(int n) {
	return n;
}


int main() {
	cout << sum(1)<<endl;
	cout << sum(1,2)<<endl;
	cout << sum(1,7,8)<<endl;
}