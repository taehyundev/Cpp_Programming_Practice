#include <iostream>
using namespace std;

class test {
private:
public:
	test() {
		cout << "������ ����"<<endl;
	}
	~test() {

		cout << "�Ҹ��� ����";

	}
};

int main() {
	test t;
}