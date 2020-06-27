#include <iostream>
using namespace std;

class printer {
private:
	string model;//�𵨸�
	string manu; //������
	int printedCount; // �μ� �ż�
	int availableCount; // �μ� ���� �ܷ�
public:
	printer(string m, string ma, int pCount) {
		model = m; manu = ma; availableCount = pCount;
	}
	string getModel() {
		return model;
	}
	string getManu() {
		return manu;
	}
	int getVail() {
		return availableCount;
	}
	bool print(int pages) {
		printedCount = pages;
		if (printedCount <= availableCount){
			availableCount -= printedCount;
			return true;
		}else {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return false;
		}
	}
};

class ink :public printer {
	int inkCount;
public:
	ink(string n, string ma, int count, int ink) :printer(n, ma, count) {
		inkCount = ink;
	}
	void show() {
		cout << getModel() << " ," << getManu() << " ,���� ���� " << getVail() << "�� ,���� ��ũ " << inkCount<<endl;
	}
	void printInk(int pages) {
		if (print(pages)) {
			if (inkCount >= pages) {
				inkCount -= pages;
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
			}
		}
	}
};
class raser :public printer {
	int tonerCount;
public:
	raser(string n, string ma, int count, int toner) :printer(n, ma, count) {
		tonerCount = toner;
	}
	void show() {
		cout << getModel() << " ," << getManu() << " ,���� ���� " << getVail() << "�� ,������� " << tonerCount<<endl;
	}
	void printRaser(int pages) {
		if (print(pages)) {
			if (tonerCount >= pages) {
				tonerCount -= pages;
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
			}
		}
	}
};

int main() {
	ink * ip = new ink("Officejet V40","HP",5,10);
	raser * rp = new raser("SCX-6x45", "�Ｚ����", 3, 20);
	
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ip->show();
	cout << "������ : "; rp->show();
	cout << endl << endl;
	while (1) {
		int sw, num;
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> sw>> num;
		if (sw == 1) {
			ip->printInk(num);
			ip->show();
			rp->show();
		}
		else if (sw == 2) {
			rp->printRaser(num);
			ip->show();
			rp->show();
		}

		cout << "��� ����Ʈ �Ͻðڽ��ϴ�(y/n)>>";
		char s;
		cin >> s;
		if (s == 'y') continue;
		else break;
	}
}