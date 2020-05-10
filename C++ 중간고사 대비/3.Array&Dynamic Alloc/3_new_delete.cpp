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

	cout << "Max 값 : " << max<<endl;
	cout << "Min 값 : " << min << endl;
	
	delete[] data;
	//그냥 delete는 배열 1칸을 지워줌

}