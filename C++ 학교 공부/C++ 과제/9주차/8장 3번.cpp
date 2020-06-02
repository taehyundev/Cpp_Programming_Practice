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
		//protected를 쓰는 이유는 무엇일까?
		//private은 같은 클래스에서만 사용가능하고, protected는 같은 클래스를 포함하고 상속관계일때 사용가능하다.
		//public은 외부클래스 외부 패키지 상속관계 같은 클래스 모두 사용가능하다.
	}
	void setColor(string color) { this->color = color; }
	void show() {
		cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.";
	}
};
int main() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}