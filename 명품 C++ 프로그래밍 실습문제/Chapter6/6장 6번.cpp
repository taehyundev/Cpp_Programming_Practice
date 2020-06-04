#include <iostream>
using namespace std;

class ArrayUtility2 {
	/*
	static �� ��������, Ŭ�����ܺ��� �Լ��� ���η� �ҷ��� �� ���
	Ŭ�������� ����
	*/
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int & reSize);
	//static �� Ŭ�����ȿ����� �����ϸ� ��
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
	cout << "������ 5 �� �Է��϶�. �迭 x���� �����Ѵ�>>";
	for (int i = 0; i < size; i++) {
		cin >> x[i];
	}

	cout << "������ 5 �� �Է��϶�. �迭 y���� �����Ѵ�>>";
	for (int i = 0; i < size; i++) {
		cin >> y[i];
	}
	int* result;
	result= ArrayUtility2::concat(x, y, size);
	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;
	for (int i = 0; i < size * 2; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	result =ArrayUtility2::remove(x, y, size, resize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << resize<<endl;

	for (int i = 0; i < resize; i++) {
		cout << result[i] << " ";
	}
}