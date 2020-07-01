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
			cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		else 
			cout << "----- "<< name <<"�±��� ��� Trace ������ ����մϴ�. -----" << endl;
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
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
	
}
int main() {
	Trace::put("main()", "���α׷��� �����մϴ�.");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();

}