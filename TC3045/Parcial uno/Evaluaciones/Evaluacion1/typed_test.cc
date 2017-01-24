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

typedef testing::Types<BubbleSort> implemetations;

TYPED_TEST_CASE(FixTyped, implemetations);

TYPED_TEST(FixTyped, testName){
  for(int i = 0; i<10; i++)
    EXPECT_EQ(i, this -> instance2Test -> prueba[i]);
}
