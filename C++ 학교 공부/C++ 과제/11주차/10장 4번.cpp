#include <iostream>
using namespace std;

template<class T1, class T2>
bool search(T1 ob, T2 x[], int max) {
	for (int i = 0; i < max; i++) {
		if (ob == x[i]) return true;
	}
	return false;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다.";
	else cout << "100이 배열 x에 포함되어 있지 않다.";
}