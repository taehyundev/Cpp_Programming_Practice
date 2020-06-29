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
		sc[0].setTime("07시");
		sc[1].setTime("12시");
		sc[2].setTime("17시");
	}
	void reservation(int sw) {
		sc[sw - 1].show();
		cout << "좌석 번호>> ";
		int seatnum;
		cin >> seatnum;
		cout << "이름 입력>> ";
		string name;
		cin >> name;
		sc[sw - 1].setSeat(seatnum, name);
	}
	
	void Cancelreservation(int sw) {
		sc[sw - 1].show();
		cout << "좌석 번호>> ";
		int seatnum;
		cin >> seatnum;
		cout << "이름 입력>> ";
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
	cout << "***** 한성항공에 오신것을 환영합니다. *****" << endl<<endl;
}
//menu Setting
void Console::menu() {
	cout << "예약:1, 취소:2, 보기:3, 끝내기:4>>";
	cin >> Console::sw;
}
//time Setting
void Console::time() {
	cout << "07시:1, 12시:2, 17시:3>>";
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
			cout << "예약 시스템을 종료합니다." << endl;
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