#include  <iostream>
using namespace std;
int cnt = 0;
int recursive(int n) {
	cnt++;
	if (n == 0) return 0;
	cout <<cnt<<"번째 RECURSIVE value : "<< n<<endl;
	recursive(n - 1);
}
int main() {
	int data = 5;
	recursive(data);
}
