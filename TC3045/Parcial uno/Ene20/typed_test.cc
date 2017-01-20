#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class instanceType>
class FixTyped : public testing::Test{
public:
  FixTyped(){
    instance2Test = new instanceType;
  }
  ~FixTyped(){
    delete instance2Test;
    instance2Test =  NULL;
  }

protected:
  Base* instance2Test;

};

typedef testing::Types<Child1, Child2> implemetations;

TYPED_TEST_CASE(FixTyped, implemetations);

TYPED_TEST(FixTyped, testName){
  EXPECT_EQ(1, this -> instance2Test -> doSomething());
}
