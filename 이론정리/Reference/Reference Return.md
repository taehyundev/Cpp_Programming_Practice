# Reference Return

* 참조 리턴

  참조 리턴은 쉽게 말하면 일반적인 Return형식이 아닌 공간까지 통체로 Return을 시키는 형태이다.

```c++
#include <iostream>
using namespace std;
char& find(char s[], int index){
	return s[index];
}

int main(){
	char name[] = "Mike";
    cout << name << endl;
    
    find(name, 0) = 'S';
    cout << name << endl;
    
    char& ref = find(name, 2);
    ref = 't';
    cout << name <<endl;
}
```

위와 같은 소스의 find함수의 러턴형태를 보고 참조 리턴이라고 한다.

s[index]의 값을 리턴시키면, 값과 함께 s[index]의 주소값이 같이 리턴이 된다. char& ref 에는 s[index]의 주소를 공유하는 형태가 되게된다. 그래서 ref = 't'로 바꾸게 되면 Mike의 k가 t로 바뀌는 형태를 볼 수 있다.

