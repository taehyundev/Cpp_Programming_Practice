# Operator Overloading

* 전위 ++ 연산자

* 일반 연산자 오버로딩

```c++
Power& Power::operator++(){ // 반환형태가 reference형태이다. 그대로 가져가서
    //++ 기능
    return *this;
}
```

* friend 사용

```c++
Power& operator++(Power &op){ // 반환형태가 reference형태이다. 그대로 가져가서
    //op.요소 ++ 기능
    return *this;
}
```



* 후위 ++ 연산자

* 일반 연산자 오버로딩

```c++
Power Power::operator++(int x){//tmp를 가져가서 일반 객체 반환형 
    //int x 라는 임의의 정수를 넣는다.
	Power tmp = *this;// 증감 이전의 값
    //++ 기능
    return tmp;
}
```

* friend 사용

```c++
Power operator++(Power &op, int x){ // 반환형태가 reference형태이다. 그대로 가져가서
    Power temp = op;
    //op.요소 ++ 기능
    return temp;
}
```



후위연산은 temp를 반환시켜줌으로써 증감되기전의 값을 반환시켜준다.

* !, ==같은 연산자 오버로딩때는 반환형태를 보통 bool로 해준다.