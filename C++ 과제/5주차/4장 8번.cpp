#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;

	Circle * c = new Circle[n]; 
	int r; int count = 0;

	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		c[i].setRadius(r);
	}
	for (int i = 0; i < n; i++)
		if (c[i].getArea() > 100) count++;

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
}