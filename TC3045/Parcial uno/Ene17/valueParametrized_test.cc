#include "gtest/gtest.h"
#include "functions.h"


class FixValParam : public testing::TestWithParam<int> { //FixtureValParam hereda de TestWithParam
public:
  void SetUp(){}
  void TearDown(){}
};

//Macros
TEST_P(FixValParam/*parametros*/, Pares/*nombre del test*/){  //test con parametros, se llama TEST_P
  //debe mandar valores de true cuando si sea par
  if(GetParam()%2 == 0)
    EXPECT_EQ(true, isEven(GetParam()));
  else
    EXPECT_EQ(false, isEven(GetParam()));


    //la funcion GetParam() obtiene los parametros de una instanciacion


}

TEST_P(FixValParam, Impares){  //test con parametros, se llama TEST_P
  if(GetParam()%2 !=0)
    EXPECT_EQ(true, isOdd(GetParam()));
  else
    EXPECT_EQ(false, isOdd(GetParam()));

}

//instanciacion de los valores para las dos pruebas
INSTANTIATE_TEST_CASE_P(Values, FixValParam, testing::Values(1,2,3,4,5));
