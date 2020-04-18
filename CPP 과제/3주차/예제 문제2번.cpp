#include <iostream>

using namespace std;

class Account {

private:

int id=0;

string name="";

int money=0;

public:

Account(string name,int id, int money) {

this->id = id;

this->name = name;

this->money = money;

}

void deposit(int money) {

this->money += money;

}

int withdraw(int money) {

this->money -= money;

return this->money;

}

string getOwner() {

return this->name;

}

int inquiry() {

return this->money;

}

};

int main() {

Account a("kitae", 1, 5000);

a.deposit(50000);

cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

int money = a.withdraw(20000);

cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

}
