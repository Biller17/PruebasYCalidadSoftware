#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class instanceType>
class TypeParametrized : public testing::Test{
protected:
  Base * instance2Test;
public:
  TypeParametrized()
  {
      instance2Test = new instanceType;
  }
  ~TypeParametrized()
  {
      delete instance2Test;
      instance2Test = NULL;
  }

};


TYPED_TEST_CASE_P(TypeParametrized);

TYPED_TEST_P(TypeParametrized, bubbleSort){

  for(int i = 0; i<10; i++)
      EXPECT_EQ(i, this -> instance2Test-> prueba[i]);
}

REGISTER_TYPED_TEST_CASE_P(TypeParametrized, bubbleSort);
