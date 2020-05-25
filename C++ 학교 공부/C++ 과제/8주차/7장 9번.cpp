#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
    friend Circle operator+(int x,Circle op);
};
Circle operator+(int x, Circle op) {
    Circle tmp = op;
    tmp.radius = x + op.radius;
    return tmp;

}
int main() {
    Circle a(5), b(4);
    b = 1 + a;
    a.show();
    b.show();
}