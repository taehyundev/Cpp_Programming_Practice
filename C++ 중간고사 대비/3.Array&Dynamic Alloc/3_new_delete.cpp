#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "input Data : ";
	cin >> n;
	int max;
	int min;
	int* data = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> data[i];
		if (i == 0) {
			max = data[i];
			min = data[i];
			continue;
		}
		if (max < data[i]) {
			max = data[i];
		}
		if (min > data[i]) {
			min = data[i];
		}
	}

	cout << "Max �� : " << max<<endl;
	cout << "Min �� : " << min << endl;
	
	delete[] data;
	//�׳� delete�� �迭 1ĭ�� ������

}