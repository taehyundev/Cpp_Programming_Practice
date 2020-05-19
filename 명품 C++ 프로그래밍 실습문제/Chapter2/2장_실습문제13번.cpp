#include <iostream>
using namespace std;
int main() {
	cout << "***** 승리장에 오신 것을 환영합니다 *****\n";
	int sw;
	int amount=0;
	string select_menu;
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> sw;
		if (sw == 4) {
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}

		if (sw == 1) select_menu = "짬뽕";
		else if (sw == 2) select_menu = "짜장";
		else if (sw == 3) select_menu = "군만두";
		else {
			cout << "다시 주문하세요!!\n";
			continue;
		}

		cout << "몇인분?";
		cin >> amount;

		cout << select_menu<<" "<<amount<<"인분 나왔습니다.\n";
	}
}