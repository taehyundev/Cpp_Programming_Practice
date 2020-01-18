#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;
class Card {
private :
	string shape;
	char special_num;
public :
	int num;
	void setFontColor(int color) {
		CONSOLE_SCREEN_BUFFER_INFO info;
		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (info.wAttributes & 0xf0) | (color & 0xf));
	}
	__inline void resetFontColor() {
		setFontColor(7);
	}
	void Card_Infor() {
		if (num == 1 || num == 11 || num == 12 || num == 13)
		{
			if (shape == "¡ß" || shape == "¢¾") {
				setFontColor(12);
			}
			else {

				setFontColor(9);
			}
			cout << shape << special_num;
			resetFontColor();

		}
		else {
			if (shape == "¡ß" || shape == "¢¾") {
				setFontColor(12);
			}
			else {

				setFontColor(9);
			}
			cout << shape << num;
			resetFontColor();
		}
	}
	void Card_Open(int I_shape, int I_num, string order) {
		if (I_shape == 1) {
			shape = "¡ß";
		}
		else if (I_shape == 2) {
			shape = "¢¾";

		}
		else if (I_shape == 3) {
			shape = "¢¼";

		}
		else if (I_shape == 4) {
			shape = "¢À";
		}
		if (I_num == 1) {
			special_num = 'A';
			num = I_num;
		}
		else if (I_num == 11) {
			special_num = 'J';
			num = I_num;
		}
		else if (I_num == 12) {
			special_num = 'Q';
			num = I_num;
		}
		else if (I_num == 13) {
			special_num = 'K';
			num = I_num;
		}
		else {
			num = I_num;
		}
		if (num == 1 || num == 11 || num == 12 || num == 13)
		{
			cout << order << " : ";
			if (shape == "¡ß" || shape == "¢¾") {
				setFontColor(12);
			}
			else {
				setFontColor(9);
			}
			cout << shape << special_num << endl;
			resetFontColor();
		}
		else {
				cout << order << " : ";

				if (I_shape == 1 || I_shape == 2) {
					setFontColor(12);
				}
				else {
					setFontColor(9);
				}
				cout << shape << num << endl;
				resetFontColor();
			
		}
	}
};
int Random_shape() {
	int num;
	srand((unsigned int)time(NULL));
	num = (rand() % 4) + 1;
	return num;
}
int Random_num() {
	int num;
	srand((unsigned int)time(NULL));
	num = (rand() % 13) + 1;
	return num;
}
int main() {
	Card* card = new Card[2];
	string user_result;
	string com_result;
	int result=0; // com °ªÀ» ¹Þ±âÀü ¼ýÀÚ°ª
	int First_Shape;
	int First_Num;
	int Second_Shape;
	int Second_Num;
	while (1) {
		system("cls");
		First_Shape = Random_shape();
		First_Num = Random_num();
		card[0].Card_Open(First_Shape, First_Num, "First Card");
		cout << "È¦, Â¦Áß¿¡ °ñ¶óÁÖ¼¼¿ä" << endl << ">> ";
		while (1) {
			cin >> user_result;
			if (user_result == "È¦" || user_result == "Â¦") {
				break;
			}
			else {
				cout << "´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä!!" << endl;
			}
		}
		Second_Shape = Random_shape();
		Second_Num = Random_num();
		card[1].Card_Open(Second_Shape, Second_Num, "Second Card");

		for (int i = 0; i < 2; i++) {

			card[i].Card_Infor();
			result += card[i].num;
			if (i == 0) {
				cout << " + ";
			}
			else {
				cout << " = ";
			}
		}
		if (result % 2 == 0) {
			com_result = "Â¦";
		}
		else {
			com_result = "È¦";
		}
		cout << result << endl;
		cout << "Computer : " + com_result << endl << "User : " + user_result << endl << endl;
		if (com_result == user_result) {
			card->setFontColor(10);
			cout << "ÀûÁß";
			card->resetFontColor();
		}
		else {
			card->setFontColor(4);
			cout << "¹ÌÀûÁß";
			card->resetFontColor();
		}
		system("pause");
	}
}