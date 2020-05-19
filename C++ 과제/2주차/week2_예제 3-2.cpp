#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return (width * height) / 2;
}

int main() {
	Rectangle rect;
	rect.width = 10;
	rect.height = 5;
	cout << "삼각형의 면적은 " << rect.getArea() << endl;

}
