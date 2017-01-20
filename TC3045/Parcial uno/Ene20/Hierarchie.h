#include <iostream>

class Base{
public:
  virtual int doSomething() = 0;
};

class Child1 : public Base{
public:
  int doSomething(){
    std::cout<<"I'm in child one"<<std::endl;
    return 1;//flag its ok
  }
};

class Child2 : public Base{
public:
  int doSomething(){
    std::cout<<"im in child 2"<<std::endl;
    return 1; //flag its ok
  }

};


class Child3: public Base{
  int value;
public:
  Child3(int value) : value(value){}

  int doSomething(){
    std::cout<<"im child3 with value"<<value<<std::endl;
    return 1;
  }

};
