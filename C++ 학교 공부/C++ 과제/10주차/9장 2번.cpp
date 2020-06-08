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
class KmToMile :public Converter {
private:
	string src;
	string des;
public:
	double convert(double src) { return src / ratio; }
	string getSourceString() { return src; }
	string getDestString() { return des; }
	KmToMile(double x):Converter(x) {
		src = "Km";
		des = "Mile";
	}
};
int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}