#include <iostream>
#include <cstring>
using namespace std;
int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	char buf[10000];
	cin.getline(buf, sizeof(buf), ';');
	int bufSize = strlen(buf);
	int alphaCnt = 0;
	for (int i = 0; i < bufSize; i++) {
		for (char alpha = 'a'; alpha <= 'z'; alpha++) {
			if (buf[i] == alpha || buf[i] == alpha - 32) {
				alphaCnt++;
			}
		}
	}
	cout << "�� ���ĺ� �� " << alphaCnt << endl << endl;

	//Function set
	for (char alpha = 'a'; alpha <= 'z'; alpha++) {
		int cnt = 0;
		for (int i = 0; i < bufSize; i++) {
			if (buf[i] == alpha || buf[i] == alpha - 32) {
				cnt++;
			}
		}
		cout << alpha << " (" << cnt << ")\t: ";
		for (int i = 0; i < cnt; i++) {
			cout << '*';
		}
		cout << endl;
	}
}