#include <iostream>
using namespace std;

class Color {
	int red;
	int green;
	int blue;
public:
	Color(int red = 0, int green = 0, int blue = 0) {
		this->red = red; this->green = green; this->blue = blue;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue<<endl;
	}

	Color& operator+(Color x);
	bool operator==(Color x);
};
Color& Color::operator+(Color x) {
	this->red += x.red;
	this->green += x.green;
	this->blue += x.blue;
	return *this;
}

bool Color::operator==(Color x) {
	if (this->red == x.red && this->green == x.green && this->blue && x.blue)
		return true;
	return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();
	
	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라 아님";
}