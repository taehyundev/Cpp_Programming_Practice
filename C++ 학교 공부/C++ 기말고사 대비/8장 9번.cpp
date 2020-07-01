#include <iostream>
using namespace std;

class Seat {
	string seatN;
public:
	Seat() { seatN = "---"; }
	string getName() { return seatN; }
	void setName(string name) { seatN = name; }
};
class Schedule {
	Seat* s;
	string time;
public:
	Schedule() { s = new Seat[8]; }
	void setTime(string t) { time = t; }
	void show() {
		cout << time << ":\t";
		for (int i = 0; i < 8; i++) {
			cout << s[i].getName() << "\t";
		}
		cout << endl;
	}
	void setSeat(int idx, string name) {
		s[idx-1].setName(name);
	}

	void cancelSeat(int idx, string name) {
		s[idx-1].setName("---");
	}
};
class AirlineBook {
	Schedule* sc;
public:
	AirlineBook() {
		sc = new Schedule[3];
		sc[0].setTime("07��");
		sc[1].setTime("12��");
		sc[2].setTime("17��");
	}
	void reservation(int sw) {
		sc[sw - 1].show();
		cout << "�¼� ��ȣ>> ";
		int seatnum;
		cin >> seatnum;
		cout << "�̸� �Է�>> ";
		string name;
		cin >> name;
		sc[sw - 1].setSeat(seatnum, name);
	}
	
	void Cancelreservation(int sw) {
		sc[sw - 1].show();
		cout << "�¼� ��ȣ>> ";
		int seatnum;
		cin >> seatnum;
		cout << "�̸� �Է�>> ";
		string name;
		cin >> name;
		sc[sw - 1].cancelSeat(seatnum,name);
	}
	void showAll() {
		for (int i = 0; i < 3; i++)
			sc[i].show();
	}
};
class Console {
	static int sw;
public:
	static void run();
	static void main(AirlineBook* air);
	static void menu();
	static void time();
};
//sw init Variable
int Console::sw = -1;
//program run
void Console::run() {
	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. *****" << endl<<endl;
}
//menu Setting
void Console::menu() {
	cout << "����:1, ���:2, ����:3, ������:4>>";
	cin >> Console::sw;
}
//time Setting
void Console::time() {
	cout << "07��:1, 12��:2, 17��:3>>";
	cin >> Console::sw;
}
//Main Console
void Console::main(AirlineBook* air) {
		Console::menu();
		switch (Console::sw) {
		case 1:
			Console::time();
			air->reservation(Console::sw);
			break;
		case 2:
			Console::time();
			air->Cancelreservation(Console::sw);
			break;
		case 3:
			air->showAll();
			break;
		case 4:
			cout << "���� �ý����� �����մϴ�." << endl;
			exit(1);
		}
}
int main() {

	AirlineBook* air = new AirlineBook;
	Console::run();
	while (1) {
		Console::main(air);
	}
}