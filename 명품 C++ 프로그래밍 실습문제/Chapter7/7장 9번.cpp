#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius=0) { this->radius = radius; }
	friend Circle operator+(Circle x, Circle y);
	void show();
};
Circle operator+(Circle x, Circle y) {
	Circle temp;
	temp = x.radius + y.radius;
	return temp;
}
void Circle::show() {
	cout << "radius = " << radius << " ÀÎ ¿ø" << endl;
}
int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}