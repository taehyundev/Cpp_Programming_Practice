#include <iostream>
using namespace std;
//linked list
// [DATA | NEXT] >[DATA | NEXT] >[DATA | NEXT] >[DATA | NEXT]

typedef struct _Node {
	string data;
	struct _Node* Next;
}Node;

Node* head, * endd;
Node* temp1, * temp2, * temp_In;
int top = 0;

template< class T>
void init(T n, T n1) {

	head = new Node;
	head->Next = NULL;
	endd = new Node;
	head->Next = endd;
	endd->Next = NULL;

	temp1 = new Node;
	head->Next = temp1;
	temp1->data = n;
	temp1->Next = endd;
	temp2 = new Node;
	temp1->Next = temp2;
	temp2->Next = endd;
	temp2->data = n1;
	top = 2;
}

void Insert() {
	string c;
	cout << "Add Str : ";
	cin >> c;
	temp_In = new Node;
	temp_In->data = c;
	top++;
	Node* pt;

	for (pt = head; pt->Next != endd; pt = pt->Next) {
		if (pt->Next->data > temp_In->data) {
			break;
		}
	}

	temp_In->Next = pt->Next;
	pt->Next = temp_In;

}
int deletef() {
	string  c;
	cout << "Delete Str : ";
	cin >> c;
	Node* ptr;
	Node* deleteptr;
	for (ptr = head; ptr->Next != endd; ptr = ptr->Next) {
		if (c == ptr->Next->data) {
			deleteptr = ptr->Next;
			ptr->Next = ptr->Next->Next;
			delete deleteptr;
			break;
		}
		if (ptr->Next->Next == endd)
			return -1;
	}

	top--;
	return 0;
}

int main() {
	int i = 0;
	Node* ptr;
	string A, B;
	cin >> A >> B;
	string temp;
	if (A > B) {
		temp = A;
		A = B;
		B = temp;
	}

	init(A, B);

	ptr = head->Next;
	for (int i = 0; i < top; i++) {
		cout << ptr->data << endl;
		ptr = ptr->Next;
	}

	Insert();

	ptr = head->Next;
	for (int i = 0; i < top; i++) {
		cout << ptr->data << endl;
		ptr = ptr->Next;
	}

	if (deletef() == -1) {
		cout << "삭제하실 정보가 없습니다." << endl;
	}
	else {

		cout << "삭제가 완료하였습니다." << endl;
		ptr = head->Next;
		for (int i = 0; i < top; i++) {
			cout << ptr->data << endl;
			ptr = ptr->Next;
		}
	}
}