#include <string>
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() {
		name = "";

	}
	NamedCircle(int radius, string name) : Circle(radius) {
		this->name = name;
	}
	void setInfo(int radius, string name) {
		this->name = name;
		setRadius(radius);
	}

	string getName() {
		return name;
	}
	void show() { cout << "�������� " << getRadius() << "�� " << name << endl; }
};

int main() {
	NamedCircle pizza[5];

	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		int radius;
		string name;
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setInfo(radius, name);
	}
	double max = pizza[0].getArea();
	string name;
	for (int i = 1; i < 5; i++) {
		if (pizza[i].getArea() > max) {
			max = pizza[i].getArea();
			name = pizza[i].getName();
		}
	}
	cout << "���� ������ ū ���ڴ� " << name << "�Դϴ�.";
}