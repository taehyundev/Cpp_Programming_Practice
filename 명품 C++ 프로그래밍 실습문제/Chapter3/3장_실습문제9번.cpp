#include <iostream>
using namespace std;
class Oval {
private:
	int width;
	int height;
public:

	//急攫何
	Oval();
	Oval(int width, int height);
	~Oval();
	void set(int width, int height);
	void show();
	int getWidth();
	int getHeight();
};
Oval::Oval() {
	width = 1;
	height = 1;
}
//备泅何
Oval::~Oval() {
	cout << "Oval 家戈 : width = " << width << ", height = " << height << endl;
}
Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}
void Oval::set(int width, int height) {
	this->width = width;
	this->height = height;
}
void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}
int Oval::getHeight() {
	return height;
}
int Oval::getWidth() {
	return width;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}

//width = 10, height = 20;
// 3,4
// Oval 家戈: width = 3, height = 4
// Oval 家戈: width = 10, height = 20