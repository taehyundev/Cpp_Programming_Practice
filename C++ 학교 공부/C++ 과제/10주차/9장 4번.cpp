#include <iostream>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�." << endl;
}
void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}


class  WhileLoopAdder :public LoopAdder {
public:
	WhileLoopAdder(string name) :LoopAdder(name) {	}
	int calculate();
};
int WhileLoopAdder::calculate() {
	int i = getX();
	int sum=0;
	while (i<=getY()) {
		sum += i;
		i++;
	}
	return sum;
}
class  DoWhileLoopAdder:public LoopAdder{
public:
	DoWhileLoopAdder(string name) :LoopAdder(name) {}
	int calculate();
};

int DoWhileLoopAdder::calculate() {
	int i = getX();
	int sum = 0;
	do{
		sum += i;
		i++;
	} while (i <= getY());
	return sum;
}


int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder dowhileLoop("Do while Loop");
	whileLoop.run();
	dowhileLoop.run();
}