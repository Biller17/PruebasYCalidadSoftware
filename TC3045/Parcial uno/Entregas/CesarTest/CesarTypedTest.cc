#include "gtest/gtest.h"
#include "Cesar.h"

template <class instanceType>
class Fixture : public testing::Test{
protected:
  Cesar* instanceCesar;
public:
  Fixture(){
    instanceCesar = new instanceType;
  }
  ~Fixture(){
    delete instanceCesar;
    instanceCesar = NULL;
  }
};

typedef testing::Types<Cesar>implementations;

TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations){
  EXPECT_EQ("traducción", this-> instanceCesar->read());
}
