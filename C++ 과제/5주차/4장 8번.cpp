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
	cout << "���� ���� >> ";
	cin >> n;

	Circle * c = new Circle[n]; 
	int r; int count = 0;

	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
	}
	for (int i = 0; i < n; i++)
		if (c[i].getArea() > 100) count++;

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}