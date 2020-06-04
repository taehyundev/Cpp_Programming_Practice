#include <iostream>
using namespace std;
int big(int n, int n1) {
	const int MAX = 100;
	int result = n1 > n ? n1 : n;
	return result > MAX ? MAX : result;
}
int big(int n, int n1,const int MAX) {
	int result = n1 > n ? n1 : n;
	return result > MAX ? MAX : result;
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z;
}