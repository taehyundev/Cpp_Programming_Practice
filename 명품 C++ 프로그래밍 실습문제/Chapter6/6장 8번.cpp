#include <iostream>
using namespace std;
class Trace {
	static string debugInfo[100];
	static string tag[100];
	static int size;
public:
	static void put(string tag, string debuInfo);
	static void print(string tag);
};
//Static 멤버 변수는 외부에 전역 변수로 선언되어있어야한다.
int Trace::size = 0;
string Trace::debugInfo[100];
string Trace::tag[100];

void Trace::put(string tag, string debug) {
	Trace::tag[size] = tag;
	Trace::debugInfo[size] = debug;
	size++;
}
void Trace::print(string tag = " ") {
	if (tag == " ") {
		cout << "----- 모든 Trace 정보를 출력합니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << Trace::tag[i] << ":" << Trace::debugInfo[i];
		}
	}
	else {
		cout << "----- "<<tag<<"태그의 Trace 정보를 출력합니다." << endl;
		for (int i = 0; i < size; i++) {
			if(tag == Trace::tag[i])
				cout << Trace::tag[i] << ":" << Trace::debugInfo[i];
		}
	}
}
void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin>> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;

}

int main() {
	Trace::put("main()", "프로그램 시작합니다.");
	f();
	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();

}