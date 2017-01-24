#include "gtest/gtest.h"
#include "TypeParametrized.h"

typedef testing::Types<BubbleSort> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(MiTest, TypeParametrized, implementations);
