#include <iostream>
using namespace std;
class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar :public Converter {
	string src, des;
public:
	double convert(double dallor) { return dallor / ratio; }
	string getSourceString() { return src; }
	string getDestString() { return des; }
	WonToDollar(double dollar):Converter(dollar) {
		src = "��";
		des = "�޷�";
	}

};

int main() {
	WonToDollar wd(1010);
	wd.run();
}