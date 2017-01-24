#include "gtest/gtest.h"
#include "Hierarchie.h"


typedef Base* factoryMethod();//CREANDO la definicion de una funcion con un nombre


Base* instance1(){
  return new BubbleSort;
}

/*template<int parameter>
Base* instanceWithConstParam(){
  return new Child3(parameter);
}*/

class Fixture :public testing::TestWithParam<factoryMethod*>{
protected:
  Base* instance2Test;
public:
  void SetUp(){
    instance2Test = (*GetParam())();
  }

  void TearDown(){
    delete instance2Test;
    instance2Test = NULL;
  }
};

TEST_P(Fixture, testName){
  for(int i = 0; i < 10; i++)
    EXPECT_EQ(i,this-> instance2Test-> prueba[i]);
}


INSTANTIATE_TEST_CASE_P(CaseName, Fixture, testing::Values(&instance1));
