#include <iostream>
using namespace std;

class Square {
private:
	int n1,n2,n3,n4;
public:
	Square();
	Square(int n1);
	Square(int n1, int n2);
	Square(int n1, int n2,int n3,int n4);
	int round();
};
// 생성자 중복
Square::Square() {
	n1 = 4;
	n2 = 4;
	n3 = 4;
	n4 = 4;
}

Square::Square(int n1) {
	this->n1 = n1;
	this->n2 = n1;
	this->n3 = n1;
	this->n4 = n1;
}
Square::Square(int n1, int n2) {
	this->n1 = n1;
	this->n2 = n2;
	this->n3 = n1;
	this->n4 = n2;
}
Square::Square(int n1, int n2,int n3,int n4) {
	this->n1 = n1;
	this->n2 = n2;
	this->n3 = n3;
	this->n4 = n4;
}

int Square::round() {
	return (n1 + n2 + n3 + n4);
}

int main() {
	Square s;
	Square s1(3);
	Square s2(3, 4);
	Square s3(5, 2, 3, 5);
	cout << "둘레 : " << s.round() << endl;
	cout << "둘레 : " << s1.round() << endl;
	cout << "둘레 : " << s2.round() << endl;
	cout << "둘레 : " << s3.round() << endl;
}