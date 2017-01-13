#include"gtest/gtest.h"
#include"Warehouse.h"
#include"time.h"

class TimeFixture : public testing::Test
{
public:
    virtual void  SetUp(){
        tiempo = time(NULL);
    }

    virtual void TearDown()
    {
        EXPECT_TRUE((time(NULL) - tiempo) <= 10)<< "Tardo demasiado tiempo";
    }
private:
    time_t tiempo;
};

class WarehouseFixture : public TimeFixture{
public:
  static Warehouse<int> *a;
    void SetUp(){
      TimeFixture::SetUp();
      a->add(1);
    }
    void TearDown(){
      TimeFixture::TearDown();
    }
    static void SetUpTestCase()
    {
        a = new Warehouse<int>(10);
    }
    static void TearDownTestCase()
    {
        delete a;
    }
};

Warehouse<int>* WarehouseFixture::a = nullptr;

TEST_F(WarehouseFixture, Constructor){
    ASSERT_EQ(10, a->getCapacity());
}

TEST_F(WarehouseFixture, Agregar){
  a->add(1);
  ASSERT_EQ(3, a->size());
}

TEST_F(WarehouseFixture, isEmpty){
  ASSERT_EQ(true, a->empty());
  a->add(1);
  ASSERT_EQ(false, a->empty());
}

TEST_F(WarehouseFixture, GetSize){
  ASSERT_EQ(10, a->size());
}
