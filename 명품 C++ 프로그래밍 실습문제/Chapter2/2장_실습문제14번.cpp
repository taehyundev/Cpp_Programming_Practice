#include <iostream>
#include <cstring>
using namespace std;
int main() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	int spendMoney = 0;
	int payOff = 0;
	while (true) {
		char coffee[100];
		int num;
		cout << "주문>> ";
		cin >> coffee >> num;
		if (!strcmp(coffee, "에스프레소")) spendMoney = 2000;
		else if (!strcmp(coffee, "아메리카노")) spendMoney = 2300;
		else if (!strcmp(coffee, "카푸치노")) spendMoney = 2500;

		spendMoney = spendMoney * num;
		payOff += spendMoney;

		cout << spendMoney << "원입니다. 맛있게 드세요.\n";
	
		if (payOff >= 20000) {
			cout << "오늘 " << payOff << "원을 판매하여 카페를 닫습니다. 내일봐요~~~";
			break;
		}
	}

}