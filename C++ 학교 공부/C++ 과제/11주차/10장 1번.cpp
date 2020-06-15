#include <iostream>
using namespace std;
template <class T>
T biggest(T x[], int max) {
	T rtn = x[0];
	for (int i = 1; i < max; i++) {
		if (rtn < x[i]) rtn = x[i];
	}
	return rtn;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
}