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
	void show() { cout << "반지름이 " << getRadius() << "인 " << name << endl; }
};

int main() {
	NamedCircle pizza[5];

	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
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
	cout << "가장 면적이 큰 피자는 " << name << "입니다.";
}