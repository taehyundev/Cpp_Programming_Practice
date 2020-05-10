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
	cout << type << "持失切\n";
}
orderView::~orderView() {
	cout << type << " 社瑚切\n";
}

void f() {
	orderView o("Member");
}

int main() {
	orderView m("Main");
	f();
}
