#include <iostream>
#include <cstring>
using namespace std;
int main() {
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	int spendMoney = 0;
	int payOff = 0;
	while (true) {
		char coffee[100];
		int num;
		cout << "�ֹ�>> ";
		cin >> coffee >> num;
		if (!strcmp(coffee, "����������")) spendMoney = 2000;
		else if (!strcmp(coffee, "�Ƹ޸�ī��")) spendMoney = 2300;
		else if (!strcmp(coffee, "īǪġ��")) spendMoney = 2500;

		spendMoney = spendMoney * num;
		payOff += spendMoney;

		cout << spendMoney << "���Դϴ�. ���ְ� �弼��.\n";
	
		if (payOff >= 20000) {
			cout << "���� " << payOff << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~~";
			break;
		}
	}

}