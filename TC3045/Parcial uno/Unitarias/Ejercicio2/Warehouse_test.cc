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

class WarehouseFixture : public TimeFixture
{
public:
    void SetUp(){
      TimeFixture::SetUp();
    }
    void TearDown()
    {

    }
    static void SetUpTestCase()
    {
        a = new Warehouse<int>(10);
    }
    static void TearDownTestCase()
    {
        delete a;
    }

    static Warehouse<int> *a;
};

Warehouse<int>* WarehouseFixture::a = 0;

TEST_F(WarehouseFixture, Constructor){
    a->getCapacity();
}
