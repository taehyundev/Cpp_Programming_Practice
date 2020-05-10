#include <iostream>
using namespace std;
class print {
public:
	print();
	print(int n);
	print(int n, int m);
	print(int n, int m,int l);
};
print::print() {
	cout << "nop" << endl;
}
print::print(int n) {
	cout << n << endl;
}

print::print(int n, int m) {
	cout << (n*m) << endl;
}
print::print(int n, int m, int l) {
	cout << (n*m*l) << endl;
}

int main() {
	print a;
	print b(2);
	print c(2, 3);
	print d(2,2, 3);
}