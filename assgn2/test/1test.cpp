#include <gtest/gtest.h>
#include "1heap.hpp"

class HeapTest : public testing::Test {
  protected:
    virtual void SetUp(){
        n=14;
        int init[n];
        for(i=0; i<n; ++i){
            init[i]=5+i;
        }
        h1.Initialize(init,n);
    }
    Heap<int> h1;
};

TEST_F(HeapTest, InitializeTest){

}

TEST_F(HeapTest, DecreaseKeysTest1){
    h1.DecreaseAllKeys(2);
}

TEST_F(HeapTest, AddTest){
    int add_elems[2] = {19,18};
    h1.Add(add_elems, 2);
}

TEST_F(HeapTest, DeleteTest){
    for(i=0;i<3;i++){
        h1.Delete();
    }
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
