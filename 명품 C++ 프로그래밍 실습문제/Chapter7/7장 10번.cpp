#include <iostream>
using namespace std;
class Statistics {
	int * x;
	int top;
public:
	Statistics() { x = new int[100];  top = 0; }
	bool operator!();
	Statistics& operator<<(int x);
	void operator>>(int& x);
	void operator~();

};

bool Statistics::operator!() {
	if (top == 0)
		return true;
	return false;
}

Statistics& Statistics::operator<<(int x) {
	this->x[top] = x;
	top++;
	return *this;
}
void Statistics::operator>>(int& x) {
	x = 0;
	for (int i = 0; i < top; i++) {
		x += this->x[i];
	}
	x = x/ top;
}
void Statistics::operator~() {
	for (int i = 0; i < top; i++) {
		cout << x[i]<<' ';
	}
	cout << endl;
}
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;
	
	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}
