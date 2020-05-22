#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	Date(string dateNum) {
		year = stoi(dateNum.substr(0, 4));
		month = stoi(dateNum.substr(5, 1));
		day = stoi(dateNum.substr(7, 2));
	}
	void show() {
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ\n";
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay()<<endl;
}