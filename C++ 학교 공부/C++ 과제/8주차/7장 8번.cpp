#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << " �� ��" << endl; }
    friend Circle& operator++(Circle& op);
    friend Circle operator++(Circle& op, int x);
};
Circle& operator++(Circle& op) {
    op.radius++;
    return op;
}
Circle operator++(Circle& op, int x) {
    Circle tmp = op;
    op.radius++;
    return tmp;
}
int main() {
    Circle a(5), b(4);
    ++a; // �������� 1 ���� ��Ų��.
    b = a++; // �������� 1���� ��Ų��.
    a.show();
    b.show();
}