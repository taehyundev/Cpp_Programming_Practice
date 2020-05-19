#include <iostream>
using namespace std;

int main() {
	const int MAX = 9;
	for (int i = 1; i <= MAX; i++) {
		for (int j = 1; j <= MAX; j++) {
			cout << i << "X" << j << "=" << i * j<<"\t";
		}
		cout << "\n";
	}
}