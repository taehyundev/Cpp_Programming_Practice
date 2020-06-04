#include <iostream>
#include <string>
using namespace std;

class Board {
	
	static string* contents;
	static int amount;

public:
	static void add(string contents);
	static void print();
};
string* Board::contents= new string[1000];
int  Board::amount=0;

void Board::add(string contents) {
	string text = to_string(Board::amount) + ": " +contents;
	Board::contents[amount] = text;
	amount++;
}
void Board::print() {
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < amount+1; i++) {
		cout << contents[i]<<endl;
	}
}

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진 대회 입상하였습니다. 축하해주세요");
	Board::print();
}