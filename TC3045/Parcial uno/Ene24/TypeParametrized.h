#include "gtest/gtest.h"
#include "../Ene20/Hierarchie.h"

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

TYPED_TEST_P(TypeParametrized, simple){
  EXPECT_EQ(1, this-> instance2Test->doSomething());
}

TYPED_TEST_P(TypeParametrized, advanced){
  EXPECT_EQ(1, this-> instance2Test->doSomething());
}

REGISTER_TYPED_TEST_CASE_P(TypeParametrized, simple, advanced);
