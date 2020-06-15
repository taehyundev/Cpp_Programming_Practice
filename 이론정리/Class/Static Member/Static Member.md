# Static Member

> 객체 사이에 공유 변수를 반들고자할 때, 사용한다.

* 특징
  1. static 멤버 함수는 오직 static 멤버들만 접근
  2. static 멤버함수는 this를 사용할 수 없다.

```c++
#include <iostream>
using namespace std;

class ArrayUtility2 {
	/*
	static 은 전역변수, 클래스외부의 함수를 내부로 불러올 때 사용
	클래스계의 전역
	*/
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int & reSize);
	//static 은 클래스안에서만 설정하면 됨
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* s = new int[size * 2];
	for (int i = 0; i < size; i++) {
		s[i] = s1[i];
	}
	for (int i = size; i < size * 2; i++) {
		s[i] = s2[i-size];
	}
	return s;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& reSize) {
	int* s = new int[size];
	int cnt = 0;
	reSize = size;
	for (int i = 0; i < size; i++) {
		bool search = true;
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				search = false;
				reSize--;

				break;
			}
		}
		if (search) {
			s[cnt] = s1[i];
			cnt++;
		}
	}
	return s;
}

int main() {
	const int size = 5;
	int resize =0;
	int x[size];
	int y[size];
	cout << "정수를 5 개 입력하라. 배열 x에서 삽입한다>>";
	for (int i = 0; i < size; i++) {
		cin >> x[i];
	}

	cout << "정수를 5 개 입력하라. 배열 y에서 삽입한다>>";
	for (int i = 0; i < size; i++) {
		cin >> y[i];
	}
	int* result;
	result= ArrayUtility2::concat(x, y, size);
	cout << "합친 정수 배열을 출력한다." << endl;
	for (int i = 0; i < size * 2; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	result =ArrayUtility2::remove(x, y, size, resize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << resize<<endl;

	for (int i = 0; i < resize; i++) {
		cout << result[i] << " ";
	}
}
```

명품 C++ 프로그램 중 하나 이다. 위의 프로그램을 참조하면서, 이해하면 될것같다.