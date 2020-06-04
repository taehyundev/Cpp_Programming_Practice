#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius) {
		this->radius = radius;
	}
	Circle() {
		radius = 1;
	}
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
void swap(Circle & c, Circle &c1) {
	Circle temp;
	temp = c;
	c = c1;
	c1 = temp;
}
int main() {
	Circle c(5), c1;

	cout << "swap Àü" << endl;
	cout << "c : " << c.getArea() << ", c1 : " << c1.getArea() << endl<<endl;

	cout << "swap ÈÄ" << endl;
	swap(c, c1);
	cout << "c : " << c.getArea() << ", c1 : " << c1.getArea() << endl << endl;
}