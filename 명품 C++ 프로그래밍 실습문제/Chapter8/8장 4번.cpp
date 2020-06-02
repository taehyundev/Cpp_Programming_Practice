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
	ColorPoint(int x = 0, int y = 0, string color = "BLACK") :Point(x, y) { 
		this->color = color; //이 부분을 간과했음
	}
	//생성자 없이 초기화되는 값을 셋팅해줌으로써 생성자 오버로딩을 안해도되는 형태가된다.
	//ColorPoint():Point(0,0){ }
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string color) { this->color = color; }
	void show() {
		cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.";
	}
};
int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();
	
	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}