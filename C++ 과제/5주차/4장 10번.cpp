#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() { ; }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setname(string name) { this->name = name; }
};

class Family {
	Person* p;
	int size;
	string name;
public:
	Family(string name, int size) {
		p = new Person[size];
		this->size = size;
		this->name = name;
	}
	void setName(int n, string name) { p[n].setname(name); }
	void show();
	~Family() { delete[] p; }
};
void Family::show() {
	cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";
	cout << endl;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}