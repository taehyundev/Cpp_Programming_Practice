#include <iostream>
using namespace std;

template<class T>
bool equalArrays(T x[], T y[], int max) {
	for (int i = 0; i < max; i++) {
		if (x[i] != y[i]) return false;
	}
	return true;

}
int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	if (equalArrays(x, y, 5)) cout << "����.";
	else cout << "�ٸ���";
}