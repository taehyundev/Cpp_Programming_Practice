#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> v;

    v.push_back("Show Me");
    v.push_back("Tiger JK");
    v.push_back("Dok2");
    v.push_back("GAEKO");
    v.push_back("ZICO");

    //ex4) v.front(), v.back() 
    cout << "//ex4) v.front(), v.back()" << endl;

    cout << "v.front() : " << v.front() << endl;
    cout << "v.end() : " << v.back() << endl;
    cout << endl;




    //ex5) v.popback()
    cout << "//ex5) v.popback()" << endl;

    vector<string>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " / ";
    }
    cout << endl;

    v.pop_back();

    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " / ";
    }
    cout << endl;
    cout << endl;




    //ex6) v.erase(iter);
    cout << "//ex6) v.erase(iter)" << endl;

    for (iter = v.begin(); iter != v.end(); iter++) {
        if (*iter == "Dok2") {
            v.erase(iter);
            break;
        }
    }
    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " / ";
    }



    cout << endl << endl;
    //ex7) v.size(), v.capacity();
    cout << "//ex7) v.size(), v.capacity()" << endl;

    cout << "v.size() : " << v.size() << endl;
    cout << "v.capacity() : " << v.capacity() << endl;

    return 0;
}
