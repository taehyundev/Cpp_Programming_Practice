#include <iostream>
using namespace std;
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	bool operator!();
};
bool Book::operator!() {
	if (this->price == 0)
		return true;
	return false;
}

int main() {
	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl;
}