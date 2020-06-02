#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(const Circle& c) {
		radius = c.radius;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	int getArea() {
		return 3.14 * radius * radius;
	}
};
int main() {
	Circle ci(15);
	Circle ci1(ci);
	cout << "ci의 면적 : " << ci.getArea() << endl;
	cout << "copy_ci의 면적 : " << ci1.getArea() << endl;
}
