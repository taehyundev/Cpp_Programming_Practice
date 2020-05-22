#include <iostream>
using namespace std;
class Account {
private:
	int id;
	int money;
	string name;
public:
	Account(string name, int id, int money) {
		this->id = id;
		this->money = money;
		this->name = name;
	}
	void deposit(int money) {
		this->money += money;
	}
	int withdraw(int money) {
		this->money -= money;
		return money;
	}
	string getOwner() {
		return name;
	}
	int inquiry() {
		return money;
	}
};

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
}