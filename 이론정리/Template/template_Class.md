# template

* 템플릿 클래스 

  ```c++
  template<class T>
  class Container {
      T* p;
      int size;
  public:
      Container(int n);
      ~Container();
      void set(int index, T value) { p[index] = value; }
      T get(int index);
  };
  ```

  위의 형태가 template 클래스 이다.

  1) 생성자를 작성할때

  > template<class T>
  >
  > Container<T>::Container(int n){
  >
  > }

  2) 소멸자를 작성할 때

  > template<class T>
  >
  > Container<T>::~Container(){
  >
  > }

  

  이 와 같이 클래스의 타입을 지정해서 사용해야한다.

  