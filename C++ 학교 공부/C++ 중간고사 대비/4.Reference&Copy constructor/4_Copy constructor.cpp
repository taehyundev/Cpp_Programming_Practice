#include <iostream>
using namespace std;
class circle {
private:
	int radius;
public:
	circle(int n) { radius = n; };
	circle(const circle& c);
	int outPut() { return radius; }
};
circle::circle(const circle& c) {
	this->radius = c.radius;
}
int main() {
	circle c1(6);
	circle c2(c1);
	cout << c1.outPut() << endl;
	cout << c2.outPut() << endl;
}