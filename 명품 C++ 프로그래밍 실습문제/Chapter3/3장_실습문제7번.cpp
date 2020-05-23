#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Random {
private:
	int n;
public:
	Random() {
		srand((unsigned)time(0));
	}
	int next() {
		int n = rand();
		if (n % 2 != 0) n += 1;
		return n;
	}
	int nextInRange(int x, int y) {
		int n = rand() % (y + 1 - x) + x;
		if (n % 2 == 0) n += 1;
		return n;
	}
};
int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << " ������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 9 ������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}