#include <iostream>
#include <cstring>
using namespace std;
// char ¹®ÀÚ¿­

int main() {
	char history[10000];
	cin.getline(history, 10000, ';');
	int alphaCnt =0;
	for (int i = 0; i < strlen(history); i++) {
		if (('a' <= history[i] && history[i] <= 'z')|| ('A' <= history[i] && history[i] <= 'Z')) {
			alphaCnt++;
		}
	}
	cout << "ÃÑ ¾ËÆÄºª ¼ö : " << alphaCnt << "\n";
	
	for (char alpha = 'a'; alpha <= 'z'; alpha++) {
		int cnt = 0;
		for (int i = 0; i < strlen(history); i++) {
			if (history[i] == alpha || history[i] == alpha - 32) {
				cnt++;
			}
		}
		cout << alpha << "(" << cnt << ")	: ";
		for (int i = 0; i < cnt; i++) {
			cout << "*";
		}
		cout << endl;
	}
}