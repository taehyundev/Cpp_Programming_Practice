#include <iostream>
using namespace std;
class Statistics {
	int x[10];
	int index;
public:
	Statistics() { index = -1; }

	friend bool operator!(Statistics op);
	friend Statistics& operator<<(Statistics& op, int x);
	friend void operator>>(Statistics op, int& avg);
	friend void operator~(Statistics op);

};
bool operator!(Statistics op) {
	if (op.index == -1) return true;
	return false;
}
Statistics& operator<<(Statistics& op, int x) {
	op.x[++op.index] = x;
	return op;
}
void operator>>(Statistics op, int& avg) {
	avg = 0;
	for (int i = 0; i < op.index + 1; i++)
		avg += op.x[i];

	avg /= (op.index+1);
}
void operator~(Statistics op) {
	for (int i = 0; i < op.index+1; i++)
		cout << op.x[i]<<' ';
	cout << endl;
}
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	
	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}