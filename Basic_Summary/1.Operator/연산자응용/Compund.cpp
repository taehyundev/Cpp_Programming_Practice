#include <iostream>
using namespace std;
int Mul(int n,int n1) {
	return n * n1;
}
double Div(int n, int n1) {
	return (double)n / n1;
}
int Sub(int n, int n1) {
	return n - n1;
}
int Add(int n, int n1) {
	return n + n1;
}
int main() {
	int n, n1;
	double sum;
	char Oper;
	cin >> n;
	sum = n;
	while (1) {
		cin >> Oper;
		switch (Oper) {
		case '*':
			cin >> n1;
			sum=Mul(sum, n1);
			break;
		case '-':
			cin >> n1;
			sum = Sub(sum, n1);
			break;
		case '/':
			cin >> n1;
			sum = (double)Div(sum, n1);
			break;
		case '+':
			cin >> n1;
			sum = Add(sum,n1);
			break;
		case '=':
			cout << "Result : " << sum;
			return 0;
			break;
		}
	}
}