#include <iostream>
#include <cstring>
using namespace std;
int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
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
	cout << "총 알파벳 수 " << alphaCnt << endl << endl;

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