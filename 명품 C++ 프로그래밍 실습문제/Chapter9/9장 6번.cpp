#include <iostream>
#include <string>
using namespace std;
class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};
class IntStack : public AbstractStack {
	int* node;
	int max;
	int top;
public:
	IntStack(int n) { node = new int[n]; max = n;  top = 0; }
	bool push(int n){
		if (max == top) return false;
		node[top++] = n;
		return true;
	}
	bool pop(int& n) {
		if (top == 0) return false;
		n = node[--top];
		return true;
	}
	int size() {
		return top;
	}
};
int main() {
	IntStack stack(5);
	while (true) {
		int sw;
		cout << "push(1), pop(2), exit(3) >> ";
		cin >> sw;
		int num;
		switch (sw) {
		case 1:
			cout << "push num : ";
			cin >> num;
			if (!stack.push(num))
				cout << "Full Stack" << endl;
			break;
		case 2:
			if (!stack.pop(num))
				cout << "EmptyStack Stack" << endl;
			else
				cout << "pop num : "<<num << endl;
			break;
		case 3:
			exit(1);
		}
	}
}