#include <iostream>
#include <string>
using namespace std;


class Circle // 기본 클래스
{
public:
	int radius;

public:
	void setRadius(int r)
	{
		radius = r;
	}
	void showRadius()
	{
		cout << "반지름" << radius << endl;
	}
};

class Pizza : public Circle // 파생 클래스
{
public:

	double getArea();


};

double Pizza::getArea()
{
	return radius * radius * 3.14;
}

int main()
{
	Circle circle;
	circle.setRadius(5);
	circle.showRadius();
	
	Pizza Hampizza;
	Hampizza.setRadius(10);
	cout << "햄 피자면적:" << Hampizza.getArea() << endl;

	Pizza cheesepizza;
	Pizza* cDer = &cheesepizza;
	Circle* cBase = cDer; // 업 캐스팅

	cBase->setRadius(100);
	cout << "치즈 피자면적:" << cDer->getArea() << endl;
	//cBase->getArea(); // 오류 발생
}