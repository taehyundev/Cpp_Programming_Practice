#include <iostream>
using namespace std;
class Matrix {
	int x[4];
public:
	Matrix(int a=0,int b=0,int c=0,int d=0) {
		x[0] = a; x[1] = b; x[2] = c; x[3] = d;
	}
	friend void operator>>(Matrix& op, int* x);
	friend void operator<<(Matrix& op, int* x);
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << x[i] << ' ';
		}
		cout <<"}" <<endl;
	}
};
void operator>>(Matrix &op,int* x) {
	for (int i = 0; i < 4; i++)
		x[i] = op.x[i];
}
void operator<<(Matrix& op, int* x) {
	for (int i = 0; i < 4; i++)
		op.x[i] = x[i];
}
int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}