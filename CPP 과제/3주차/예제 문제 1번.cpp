#include <iostream>

using namespace std;

class Tower {

private:

int Height;

public:

Tower() {

Height = 1;

}

Tower(int Height) {

this->Height = Height;

}

int getHeight() {

return Height;

}

};

int main() {

Tower myTower;

Tower seoulTower(100);

cout << "높이는 " << myTower.getHeight() << "미터" << endl;

cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

}
