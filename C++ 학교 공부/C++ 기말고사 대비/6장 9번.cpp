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
		cout << "************* �Խ����Դϴ�. *************" << endl;
		for(int i=0; i<idx; i++)
			cout << i << ": " << Content[i] << endl;
		cout << endl << endl;
	}

};
int Board::idx = 0;
string *Board::Content = new string[100];
int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("�ܼҸ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}