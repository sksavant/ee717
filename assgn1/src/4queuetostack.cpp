#include<iostream>
#include<queue>
#include<stack>
#include <gtest/gtest.h>

template <class T>
void QueuetoStack(std::queue<T>& q, std::stack<T>& s){
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
}

TEST(FunctionTest, Queuestacktest){
    std::queue<int> q;
    std::stack<int> s;
    for (int i=0; i<10; ++i){
        q.push(i);
    }
    QueuetoStack(q,s);
    int i=0;
    while(!s.empty()){
        ASSERT_EQ(i,s.top());
        s.pop();
        i++;
    }
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
