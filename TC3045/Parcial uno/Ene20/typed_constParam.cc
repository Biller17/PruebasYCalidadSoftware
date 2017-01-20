#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class T>
Base* factoryMethod(){
  return new T;
}

template<> //es una especializacion de la plantilla de arriba
Base* factoryMethod<Child3>(){
  return new Child3(10);
}


template <class T>
class FixTypedWithConst : public testing::Test{
protected:
  Base* instance2Test;
public:
  FixTypedWithConst(): instance2Test(factoryMethod<T>()){}
  virtual ~FixTypedWithConst(){
    delete instance2Test;
    instance2Test = NULL;
  }
};

typedef testing::Types<Child1,Child2, Child3> implementations;

TYPED_TEST_CASE(FixTypedWithConst, implementations);

TYPED_TEST(FixTypedWithConst, testName){
    EXPECT_EQ(1, this-> instance2Test-> doSomething());
}
