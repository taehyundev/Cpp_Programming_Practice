#include <iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint :Point {
	string color;
public:
	ColorPoint(int x, int y, string color) :Point(x, y) { this->color = color; }
	void setPoint(int x, int y) {
		move(x, y);
		//protected�� ���� ������ �����ϱ�?
		//private�� ���� Ŭ���������� ��밡���ϰ�, protected�� ���� Ŭ������ �����ϰ� ��Ӱ����϶� ��밡���ϴ�.
		//public�� �ܺ�Ŭ���� �ܺ� ��Ű�� ��Ӱ��� ���� Ŭ���� ��� ��밡���ϴ�.
	}
	void setColor(string color) { this->color = color; }
	void show() {
		cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�.";
	}
};
int main() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}