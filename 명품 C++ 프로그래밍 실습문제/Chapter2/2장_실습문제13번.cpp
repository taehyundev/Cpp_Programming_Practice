#include <iostream>
using namespace std;
int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****\n";
	int sw;
	int amount=0;
	string select_menu;
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> sw;
		if (sw == 4) {
			cout << "���� ������ �������ϴ�.\n";
			break;
		}

		if (sw == 1) select_menu = "«��";
		else if (sw == 2) select_menu = "¥��";
		else if (sw == 3) select_menu = "������";
		else {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}

		cout << "���κ�?";
		cin >> amount;

		cout << select_menu<<" "<<amount<<"�κ� ���Խ��ϴ�.\n";
	}
}