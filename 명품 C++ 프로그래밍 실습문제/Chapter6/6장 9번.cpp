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
	cout << "************* �Խ����Դϴ�. *************" << endl;
	for (int i = 0; i < amount+1; i++) {
		cout << contents[i]<<endl;
	}
}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ���� ��ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}