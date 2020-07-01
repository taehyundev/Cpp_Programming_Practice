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
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�."<<endl;
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
		cout << "��ũ�� : " << getModel() << " ," << getmanufacturer() << " ,���� ���� " << getavailableCount() << "�� ,���� ��ũ " << inkCount << endl;
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
		cout << "������ : " << getModel() << " ," << getmanufacturer() << " ,���� ���� " << getavailableCount() << "�� ,������� " << tonerCount << endl;
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
	Raser* rp = new Raser("SCX-6x45", "�Ｚ", 3, 20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����."<<endl;
	lp->show();
	rp->show();
	cout << endl;

	while (1) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
		
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		char sw;
		cin >> sw;
		if (sw == 'n') break;
		else continue;
	}
}