#include <iostream>
#include <string>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }

};

class NamedCircle :public Circle {
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};
int main() {
	NamedCircle pizza[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		int x;
		string name;
		cout << i + 1 << ">> ";
		cin >> x >> name;
		pizza[i].setName(name);
		pizza[i].setRadius(x);
	}
	double max = pizza[0].getArea();
	int position = 0;
	for (int i = 1; i < 5; i++) {
		double tmp = pizza[i].getArea();
		if (max < tmp) {
			max = tmp;
			position = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[position].getName() << "입니다."<<endl;
}