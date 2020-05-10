#include <iostream>
using namespace std;
class destructorTest {
private:
	int age;
	string name;
public:
	destructorTest(int age, string name); 
	~destructorTest();
};
destructorTest::destructorTest(int age, string name) {
	this->age = age;
	this->name = name;
}
destructorTest::~destructorTest() {
	cout << age << "»ì , ÀÌ¸§ : " << name;
}

int main() {
	int age;
	string name;
	
	cout << "age : ";
	cin >> age;

	cout << "name : ";
	cin >> name;
	
	destructorTest(age, name);

}