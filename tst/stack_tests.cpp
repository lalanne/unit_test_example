
#include "Stack.hpp"
#include "EmptyStackException.hpp"

#include <iostream>

#include <gtest/gtest.h>

using namespace std;

TEST(stack_tests, lifo_behaviour_with_1_element){
    Stack<float> stack;

    stack.push(2.5);
    
    EXPECT_EQ(2.5, stack.pop());
}

TEST(stack_tests, lifo_behaviour_with_3_elements){
    Stack<int> stack;

    stack.push(2);
    stack.push(1);
    stack.push(14);
    
    EXPECT_EQ(14, stack.pop());
    EXPECT_EQ(1, stack.pop());
    EXPECT_EQ(2, stack.pop());
}

TEST(stack_tests, pop_of_empty_stack){
    Stack<int> stack;
    
    EXPECT_THROW(stack.pop(), EmptyStackException);
}



