#include <iostream>
using namespace std;
class Board {
	static int idx;
	static string *Content;
public:
	static void add(string Content) {
		Board::Content[idx] = Content;
		idx++;
	}
	static void print() {
		cout << "************* 게시판입니다. *************" << endl;
		for(int i=0; i<idx; i++)
			cout << i << ": " << Content[i] << endl;
		cout << endl << endl;
	}

};
int Board::idx = 0;
string *Board::Content = new string[100];
int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("잔소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}