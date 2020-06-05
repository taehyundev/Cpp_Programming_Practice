#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show(){ cout << "radius = " << radius << " 인 원" << endl; }
	//전위, 반환값(Circle 객체)
	friend Circle& operator++(Circle& a);
	//후위, 반환값(Circle 객체)
	friend Circle operator++(Circle& a, int x);
};
Circle& operator++(Circle& a) {
	a.radius++;
	return a;
}
Circle operator++(Circle& a, int x) {
	Circle temp =a;
	a.radius++;
	return temp;
}
int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	
	a.show();
	b.show();
}