#include <gtest/gtest.h>
#include "2deque.hpp"

TEST(DequeTests, PushPopTest){
    MyDeque<int> d;
    d.push(5);
    ASSERT_EQ(5,d.pop());
}

TEST(DequeTests, InjectEjectTest){
    MyDeque<int> d;
    d.inject(10);
    ASSERT_EQ(10,d.eject());
}

TEST(DequeTests, PopEjectNull){
    MyDeque<float> d;
    ASSERT_THROW(d.pop(), std::exception);
    ASSERT_THROW(d.eject(), std::exception);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
