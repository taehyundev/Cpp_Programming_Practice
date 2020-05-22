#include <iostream>
#include <string>
#define TRUE 1
#define FALSE 0
using namespace std;
class Integer {
    int n;
public:
    Integer(int n);
    Integer(string n);
    void set(int n);
    int get();
    int isEven();
};
inline Integer::Integer(int n) {
    this->n = n;
}
inline Integer::Integer(string n) {
    this->n = stoi(n);
}
inline void Integer::set(int n) {
    this->n = n;
}
inline int Integer::get() {
    return n;
}
inline int Integer::isEven() {
    if (n % 2 == 0)
        return TRUE;
    else
        return FALSE;
}
int main() {
    Integer n(30);
    cout << n.get() << ' '; //30출력
    n.set(50);
    cout << n.get() << ' '; //50출력
    Integer m("300");
    cout << m.get() << ' '; //300출력
    cout << m.isEven();// true(정수로 1) 출력
}