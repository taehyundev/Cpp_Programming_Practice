#include <iostream>
using namespace std;
int main() {
	int arr[10];
	int MAX;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		if(i==0)
		MAX = arr[i];

		if (MAX < arr[i]) {
			MAX = arr[i];
		}
	}
	cout << "MAX NUM : " << MAX;
}