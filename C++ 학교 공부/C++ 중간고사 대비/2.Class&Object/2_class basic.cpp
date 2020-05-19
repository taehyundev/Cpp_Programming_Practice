#include <iostream>
using namespace std;

class Triangle {
private:
	int  x[3];
public:
	Triangle(int x,int y,int z);
	bool isTriangle();
};

Triangle::Triangle(int x, int y, int z) {
	this->x[0] = x;
	this->x[1] = y;
	this->x[2] = z;
}

bool Triangle::isTriangle() { 
	int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (x[j] > x[j + 1]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	
	return x[1]*x[1] + x[0] * x[0]==x[2]*x[2];
}
int main() {
	Triangle t(5,4,3);
	if (t.isTriangle()) {
		cout << "Á÷°¢»ï°¢Çü";
	}
	else {
		cout << "¾Æ´Ô";
	}

}