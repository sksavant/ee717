#include <gtest/gtest.h>
#include "1stacks.hpp"
#include <string>

class TwoStacksTest : public testing::Test {
  protected:
    virtual void SetUp(){
        s1_.push(0,5);
        s1_.push(1,1);
        s2_ = TwoStacks<int>(2);
        s2_.push(0,1);
        s2_.push(1,2);
    }
    TwoStacks<float> s0_;
    TwoStacks<int> s1_;
    TwoStacks<int> s2_;
    TwoStacks<std::string> s3_;
};

TEST_F(TwoStacksTest, PopEmpty){
    EXPECT_EQ(NULL,s0_.pop(0));
}

TEST_F(TwoStacksTest, PopTestNormal){
    ASSERT_EQ(5, s1_.pop(0));
    ASSERT_EQ(1, s1_.pop(1));
}

TEST_F(TwoStacksTest, PushFull){

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

