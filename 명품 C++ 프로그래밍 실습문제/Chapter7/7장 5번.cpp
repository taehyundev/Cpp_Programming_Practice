#include <iostream>
#include <string>
using namespace std;


class Circle // �⺻ Ŭ����
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
		cout << "������" << radius << endl;
	}
};

class Pizza : public Circle // �Ļ� Ŭ����
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
	cout << "�� ���ڸ���:" << Hampizza.getArea() << endl;

	Pizza cheesepizza;
	Pizza* cDer = &cheesepizza;
	Circle* cBase = cDer; // �� ĳ����

	cBase->setRadius(100);
	cout << "ġ�� ���ڸ���:" << cDer->getArea() << endl;
	//cBase->getArea(); // ���� �߻�
}