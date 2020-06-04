#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person(int id, string name, double weight);
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};
Person::Person(int id=1, string name="grace", double weight=20.5) {
	this->id = id;
	this->name = name;
	this->weight = weight;
}

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}