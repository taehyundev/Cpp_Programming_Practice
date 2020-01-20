#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;
class User_Money {
public:
    int money = 0;
    int betting = 0;
    User_Money();
};
User_Money::User_Money() :money(10000) {

}

class Card {
private:
    string shape;
    char special_num;
public:
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
            if (shape == "◆" || shape == "♥") {
                setFontColor(12);
            }
            else {

                setFontColor(9);
            }
            cout << shape << special_num;
            resetFontColor();

        }
        else {
            if (shape == "◆" || shape == "♥") {
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
            shape = "◆";
        }
        else if (I_shape == 2) {
            shape = "♥";

        }
        else if (I_shape == 3) {
            shape = "♠";

        }
        else if (I_shape == 4) {
            shape = "♣";
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
            if (shape == "◆" || shape == "♥") {
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
    User_Money m;
    Card* card = new Card[2];
    string user_result;
    string com_result;
    int result = 0; // com 값을 받기전 숫자값
    int First_Shape;
    int First_Num;
    int Second_Shape;
    int Second_Num;
    while (1) {
        system("cls");

        cout << "현재 돈 : " << m.money << endl;
        First_Shape = Random_shape();
        First_Num = Random_num();
        card[0].Card_Open(First_Shape, First_Num, "First Card");
        cout << "배팅 금액을 지정하세요(최소 3000원)" << endl<<">> ";
        while (1) {
            cin >> m.betting;
            if (m.betting > m.money || m.betting <3000) {
                cout << "돈이 부족합니다.";
            }
            else {
                m.money = m.money - m.betting;
                break;
            }
        }
        cout << endl;
        cout << "홀, 짝중에 골라주세요" << endl << ">> ";
        while (1) {
            cin >> user_result;
            if (user_result == "홀" || user_result == "짝") {
                break;
            }
            else {
                cout << "다시 입력해주세요!!" << endl;
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
            com_result = "짝";
        }
        else {
            com_result = "홀";
        }
        cout << result << endl;
        cout << "Computer : " + com_result << endl << "User : " + user_result << endl << endl;
        if (com_result == user_result) {
            card->setFontColor(10);
            cout << "적중입니다, 다음엔 꼴으시길 ~~^^&"<<endl;
            card->resetFontColor();
            m.money += m.betting * 1.94;
        }
        else {
            card->setFontColor(4);
            cout << "히이이잉 ^^ *&, 행님 꼴으셨네요 ^^~ "<<endl;
            card->resetFontColor();
        }
        cout << "돈 : "<<m.money<<endl;
        if (m.money == 0 || m.money < 3000) {

            char answer;
            cout << "현재 돈이없습니다." << endl << "충전하시겠습니까??(y/n)"<<endl <<">>";
            while (1) {
                cin >> answer;
                if (answer == 'y' || answer == 'Y') {
                    m.money = 10000;
                    cout << "만원이 충전되었습니다." << endl;
                    break;
                }
                else if (answer == 'n' || answer == 'N') {
                    cout << "돈이 없는 관계로 게임을 종료하겠습니다." << endl;
                    system("pause");
                    exit(1);
                }
                else {
                    cout << "다시 입력해주세요 " << endl;
                }
            }
        }
        result = 0;
        m.betting = 0;
        system("pause");
    }
}