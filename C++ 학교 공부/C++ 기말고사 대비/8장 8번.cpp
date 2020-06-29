#include <iostream>
using namespace std;

class Print {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Print(string model, string manufacturer, int aVailableCount) {
		this->model = model; this->availableCount = aVailableCount; this->manufacturer = manufacturer;
	}
	string getModel() {
		return model;
	}
	string getmanufacturer() {
		return manufacturer;
	}
	int getavailableCount() {
		return availableCount;
	}
	bool printer(int amount) {
		printedCount = amount;
		if (printedCount <=availableCount) {
			availableCount -= amount;
			return true;
		}
		cout << "용지가 부족하여 프린트할 수 없습니다."<<endl;
		return false;
	}
};
class Ink :public Print{
	int inkCount;
public:
	Ink(string model, string manufacturer,int aVailableCount, int inkCount) :Print(model,manufacturer,aVailableCount) {
		this->inkCount = inkCount;
	}
	void show() {
		cout << "잉크젯 : " << getModel() << " ," << getmanufacturer() << " ,남은 종이 " << getavailableCount() << "장 ,남은 잉크 " << inkCount << endl;
	}
	void printInk(int aMount) {
		if (inkCount - aMount >= 0) {
			if (printer(aMount)) {
				inkCount -= aMount;

			}
		}
	}
};
class Raser :public Print {
	int tonerCount;
public:
	Raser(string model, string manufacturer, int aVailableCount, int tonerCount) :Print(model, manufacturer, aVailableCount) {
		this->tonerCount = tonerCount;
	}
	void show() {
		cout << "레이저 : " << getModel() << " ," << getmanufacturer() << " ,남은 종이 " << getavailableCount() << "장 ,남은토너 " << tonerCount << endl;
	}
	void printRaser(int aMount) {
		if (tonerCount - aMount >= 0) {
			if (printer(aMount)) {
				tonerCount -= aMount;
			}
		}
	}
};

int main() {
	Ink* lp = new Ink("Officejet V40", "HP", 5, 10);
	Raser* rp = new Raser("SCX-6x45", "삼성", 3, 20);

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다."<<endl;
	lp->show();
	rp->show();
	cout << endl;

	while (1) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		int select, aMount;
		cin >> select >> aMount;
		if (select == 1) {
			lp->printInk(aMount);
		}
		else if (select == 2) {
			rp->printRaser(aMount);
		}
		lp->show();
		rp->show();
		
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		char sw;
		cin >> sw;
		if (sw == 'n') break;
		else continue;
	}
}