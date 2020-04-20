/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Random {
	int start_num;
	int end_num;
public:
	Random();
	int next();
	int nextInRange(int n1, int n2);
};
Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return rand();
}

int Random::nextInRange(int n1, int n2) {
	int n;

	start_num = n1;
	end_num = n2;

	n = start_num + (rand() % (end_num - start_num + 1));

	if (n % 2 == 0)
		return n;
	else
		return n - 1;
}
int main() {
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ' ;
	}

	cout << endl << endl << "--2에서 " << " 10 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
	int* n = new int[5];
	double sum =0;
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		sum += n[i];
	}
	cout << "평균 " << (sum / 5);
}
*/

#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n);
	~Sample();
	void read();
	void write();
	int big();
};
Sample::Sample(int n) {
	size = n;
	p = new int[n];
}

Sample::~Sample() {
	delete[] p;
}

void Sample::read() {
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << " ";
}

int Sample::big() {
	int max;

	max = p[0];

	for (int i = 1; i < size; i++)
		if (max < p[i])
			max = p[i];

	return max;
}
void main() {
	Sample s(10);
	s.read();
	s.write();
	cout << endl<<"가장 큰 수는 " << s.big() << endl << endl;
}
