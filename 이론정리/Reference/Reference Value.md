# Reference Value

* reference value

  reference value같은 경우에는 변수의 타입이 "자료형& 변수명"의 형태로 선언된 변수를 reference value라고 한다.

  이런 형태같은 경우에는 참조를 하거나 주소값까지 받아오는 동작을 할 수 있다.

```c++
#include <iostream>
using namespace std;
int main(){
	int data = 10;
    int &a = data;
 	a--;
    cout <<data;
}
```

위와 같은 형태의 소스를 보게되면 data를 10으로 초기화를 시켜주고, 레퍼런스 변수인  a에 data를 대입시켜줬다.

그리고 a-- 를 해주고, data를 출력시켰다. 레퍼런스 변수가 아닐 때는 10이 출력되겠지만, 위의 소스에서는 a와 data가 같은 주소를 공유하고 있기때문에 a-- 가 data까지 영향을 주어 9가 출력되게된다.