#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
	deque<int> dq;
	
	for (int i = 0; i < 5; i++) {
		dq.push_back((i + 1) * 10);
	}
	deque<int>::iterator iter; // ? 포인터적인 요소? 반복자라고 불림(이터널)

	cout << "[Default] : ";
	for (iter = dq.begin(); iter != dq.end(); iter++) {
		cout << *iter << " "; // 그렇기 때문에 *을 이용하여 값을 들고옴
	}

	cout << endl << endl;
	
	cout << "[Test1]push_front & end :";

	dq.push_front(1);  //앞쪽에 1 push
	dq.push_front(2);  //앞쪽에 2 push
	dq.push_back(100); //뒷쪽에 100 push
	dq.push_back(200); //뒷쪽에 200 push

	//일반적인 출력
	for (iter = dq.begin(); iter != dq.end(); iter++) { 
		// begin과 end는 reverse의 반대되는 개념 iter같은 경우 그냥 ++ 연산자로 다음번째 원소를 가르키면 된다.
		cout << *iter << " ";
	}
	cout << endl;
	

	cout << "[Test2]reverse_iterator : ";
	deque<int>::reverse_iterator riter;
	for (riter = dq.rbegin(); riter != dq.rend(); riter++) { 
		// rbegin :마지막 원소를 첫원소처럼 가르킴,  rend는 첫 원소를 마지막 원소처럼 가르킴
		cout << *riter << " "; 
	}
	cout << endl;

}