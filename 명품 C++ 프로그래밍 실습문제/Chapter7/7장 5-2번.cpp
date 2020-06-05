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
		cout << red << ' ' << green << ' ' << blue << endl;
	}

	friend Color& operator+(Color x,Color y);
	friend bool operator==(Color x, Color y);
};

Color& operator+(Color x, Color y) {
	Color r;
	r.blue = x.blue + y.blue;
	r.green = x.green  + y.green;
	r.red = x.red + y.red;
	return r;
}
bool operator==(Color x, Color y) {
	if (x.red == y.red && x.blue == y.blue && x.green == x.green)
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