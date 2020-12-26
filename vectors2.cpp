#include "gtest/gtest.h"

#include <iostream>
using namespace std;


//Equivalence and General Testing
TEST(vector, pushBoundary) {
    vector<int> v1;

    EXPECT_EQ(0, v1.size());
    EXPECT_EQ(true, v1.empty();

    v1.push(1);
    EXPECT_EQ(1, v1.size());
    EXPECT_EQ(1, v1.front());
    EXPECT_EQ(false, v1.empty());

    v1.push(2);
    EXPECT_EQ(2, v1.size());
    EXPECT_EQ(2, v1.front());
    EXPECT_EQ(false, v1.empty());

    v1.push(3);
    EXPECT_EQ(3, v1.size());
    EXPECT_EQ(1, v1.front());
    EXPECT_EQ(false, v1.empty());

}


TEST(vector, pushRobust) {
    vector<int> v2;
    vector<int> v3;
    vector<char> v4;


    v2.push(-100);
    EXPECT_EQ(1, v2.size());
    EXPECT_EQ(-100, v2.front());
    EXPECT_EQ(false, v2.empty());

    
    v3.push(5.0);
    EXPECT_EQ(2, v2.size());
    EXPECT_EQ(5.0, v2.front());
    EXPECT_EQ(false, v2.empty());

    v4.push(6w);
    EXPECT_EQ(3, v2.size());
    EXPECT_EQ(6w,v2.front());
    EXPECT_EQ(false, v2.empty());
   
}

TEST(vector, pushEquivalence) {
    vector<int> v2;

    v2.push(4);
    EXPECT_EQ(1, v2.size());
    EXPECT_EQ(4, v2.front());
    EXPECT_EQ(false, v2.empty());

    
    v2.push(5);
    EXPECT_EQ(2, v2.size());
    EXPECT_EQ(5, v2.front());
    EXPECT_EQ(false, v2.empty());

    v2.push(6);
    EXPECT_EQ(3, v2.size());
    EXPECT_EQ(6,v2.front());
    EXPECT_EQ(false, v2.empty());
   
}


TEST(vector,pushRandom ) {
    vector<int> v3;
    EXPECT_EQ(0, v3.size());
    EXPECT_EQ(true, v3.empty());

    int push1 = rand(100 % + 1);
    int push2 = rand(100 % + 1);
    int push3 = rand(100 % + 1);

    v3.push(push1);
    EXPECT_EQ(1, v3.size());
    EXPECT_EQ(push1, v3.front());
    EXPECT_EQ(false, v3.empty());

    v3.push(push2);
    EXPECT_EQ(2, v3.size());
    EXPECT_EQ(push2, v3.front());
    EXPECT_EQ(false, v3.empty());

    v3.push(push3);
    EXPECT_EQ(3, v3.size());
    EXPECT_EQ(push3, v3.front());
    EXPECT_EQ(false, v3.empty());

}



int main(int argc, char* argv[]) {
    
    testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}