#include <iostream>
using namespace std;
class Trace {
	static string * func;
	static string *  debug;
	static int idx;
public:
	Trace() { cout << "a" << endl; }
	static void put(string func, string debug) {
		Trace::func[idx] = func;
		Trace::debug[idx] = debug;
		idx++;
	}
	static void print(string name = "") {
		if (name == "") 
			cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		else 
			cout << "----- "<< name <<"태그의 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < idx; i++) {
			if (func[i] == name || name == "") cout << func[i] << ":" << debug[i] << endl;
		}
	}
};
string* Trace::func = new string[10];
string* Trace::debug = new string[10];
int Trace::idx = 0;
void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
	
}
int main() {
	Trace::put("main()", "프로그램을 시작합니다.");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();

}