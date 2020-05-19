#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

int main() {

    char sic[100];
    char* symbol;

    int front, rear;

    while (true) {
        cout << "? ";
        cin.getline(sic, 100);
        front = atoi(strtok(sic, " "));
        symbol = strtok(NULL, " ");
        rear = atoi(strtok(NULL, " "));
        if (*symbol == '+') {
            cout << front << " + " << rear << " = " << front + rear << endl;
        }
        else if (*symbol == '-') {
            cout << front << " - " << rear << " = " << front - rear << endl;
        }
        else if (*symbol == '*') {
            cout << front << " * " << rear << " = " << front * rear << endl;
        }
        else if (*symbol == '/') {
            cout << front << " / " << rear << " = " << front / rear << endl;
        }
        else if (*symbol == '%') {
            cout << front << " % " << rear << " = " << front % rear << endl;
        }
    }
    return 0;
}