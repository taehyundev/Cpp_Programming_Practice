#include <iostream>
using namespace std;

class printer {
private:
	string model;//모델명
	string manu; //제조사
	int printedCount; // 인쇄 매수
	int availableCount; // 인쇄 종이 잔량
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
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
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
		cout << getModel() << " ," << getManu() << " ,남은 종이 " << getVail() << "장 ,남은 잉크 " << inkCount<<endl;
	}
	void printInk(int pages) {
		if (print(pages)) {
			if (inkCount >= pages) {
				inkCount -= pages;
				cout << "프린트하였습니다." << endl;
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
		cout << getModel() << " ," << getManu() << " ,남은 종이 " << getVail() << "장 ,남은토너 " << tonerCount<<endl;
	}
	void printRaser(int pages) {
		if (print(pages)) {
			if (tonerCount >= pages) {
				tonerCount -= pages;
				cout << "프린트하였습니다." << endl;
			}
		}
	}
};

int main() {
	ink * ip = new ink("Officejet V40","HP",5,10);
	raser * rp = new raser("SCX-6x45", "삼성전자", 3, 20);
	
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; ip->show();
	cout << "레이저 : "; rp->show();
	cout << endl << endl;
	while (1) {
		int sw, num;
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
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

		cout << "계속 프린트 하시겠습니다(y/n)>>";
		char s;
		cin >> s;
		if (s == 'y') continue;
		else break;
	}
}