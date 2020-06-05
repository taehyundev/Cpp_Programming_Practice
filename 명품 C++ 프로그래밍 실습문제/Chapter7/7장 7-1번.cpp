#include <iostream>
using namespace std;

class Matrix {
	int x[4];
public:
	void show();
	Matrix(int a = 0,int b = 0, int c = 0, int d=0) {
		x[0] = a; x[1] = b; x[2] = c; x[3] = d;
	}
	Matrix& operator>>(int a[]);
	Matrix& operator<<(int a[]);
};
Matrix& Matrix::operator<<(int a[]) {
	for (int i = 0; i < 4; i++)
		x[i] = a[i];
	return *this;
}
Matrix& Matrix::operator>>(int a[]) {
	for (int i = 0; i < 4; i++)
		a[i] = x[i];
	return *this;
}
void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << "}" << endl;
}
int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] ={ 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}