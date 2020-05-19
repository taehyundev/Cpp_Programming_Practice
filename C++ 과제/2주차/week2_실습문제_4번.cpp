#include <iostream>
using namespace std;

int main() {
	int n;
	int s;
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> n;
		if (n == 1 || n == 2 || n == 3) {
			cout << "몇인분?";
			cin >> s;
		}
		if (n == 1) {
			cout << "짬뽕 " << s << "인분 나왔습니다.\n";
		}
		else if (n == 2) {

			cout << "짜장 " << s << "인분 나왔습니다.\n";
		}
		else if (n == 3) {
			cout << "군만두 " << s << "인분 나왔습니다.\n";
		}
		else if (n == 4) {
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}
		else{
			cout << "다시 주문하세요!!\n";
		}
	}
}

