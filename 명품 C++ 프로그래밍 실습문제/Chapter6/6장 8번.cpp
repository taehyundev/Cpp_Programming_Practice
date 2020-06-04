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
//Static ��� ������ �ܺο� ���� ������ ����Ǿ��־���Ѵ�.
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
		cout << "----- ��� Trace ������ ����մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			cout << Trace::tag[i] << ":" << Trace::debugInfo[i];
		}
	}
	else {
		cout << "----- "<<tag<<"�±��� Trace ������ ����մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if(tag == Trace::tag[i])
				cout << Trace::tag[i] << ":" << Trace::debugInfo[i];
		}
	}
}
void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin>> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;

}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�.");
	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();

}