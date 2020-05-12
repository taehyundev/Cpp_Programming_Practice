#include <iostream>
// 실제로 쓰일 때
using namespace std;

void msgBox() {
	cout << "This is msgBox!"<<endl;
}

void msgBox(string name) {
	cout << "Hello , " << name << endl;
}


void msgBox(int id, string name) {
	cout << "Hello , "<<id<<" : " << name << endl;
}

int main() {
	msgBox();
	msgBox("Kang");
	msgBox(1234,"kite");
}