#include "unity.h"
#include "Voter_Info.h"
void setUp()
{
}
void tearDown()
{
}

void test_If_Registerd(void)
{
  TEST_ASSERT_EQUAL(0, voteInfo(0));
  TEST_ASSERT_EQUAL(1, voteInfo(6));
}
void test_voting(void)
{
  TEST_ASSERT_EQUAL(1, voting(1));
  TEST_ASSERT_EQUAL(1, voting(2));
  TEST_ASSERT_EQUAL(1, voting(3));
  TEST_ASSERT_EQUAL(1, voting(4));
  TEST_ASSERT_EQUAL(1, voting(5));
  TEST_ASSERT_EQUAL(0, voting(6));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_If_Registerd);
  RUN_TEST(test_voting);
  return UNITY_END();
}
