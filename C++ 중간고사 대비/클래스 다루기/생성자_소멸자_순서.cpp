#include <iostream>
using namespace std;

class orderView {
private:
	string type;
public:
	orderView(string t);
	~orderView();
};

orderView::orderView(string t) {
	type = t;
	cout << type << "������\n";
}
orderView::~orderView() {
	cout << type << " �Ҹ���\n";
}

void f() {
	orderView o("Member");
}

int main() {
	orderView m("Main");
	f();
}
