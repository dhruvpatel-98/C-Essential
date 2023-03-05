#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "in_class_four.h"
#include "doctest.h"
using namespace std;
#include <stack>
#include <queue>

TEST_CASE("Testing my stacks and queues") {
    stack<int> stack1;
    queue<int> queue1;
    stack<int> stack2;
    queue<int> queue2;
    string file1 = "test_lst1.txt";
    string file2 = "test_lst2.txt";
    SUBCASE("stack & queue functions"){
        push_to_stack(file1, stack1);
        CHECK_THROWS(push_to_stack(file2, stack2));
        CHECK(stack1.top() == 6);
        CHECK(stack1.size() == 6);
        CHECK(pop_from_stack(stack1) == 6);
        CHECK(stack1.size() == 5);

        for (int i = 5; i >= 0; i--) {
            if (i == 0) {
                CHECK(stack1.empty() == 1);
            }
            else {
            CHECK(stack1.top() == i);
            CHECK(stack1.size() == i);
            CHECK(pop_from_stack(stack1) == i);
            }
        }
    }
    SUBCASE("testing my queue functions") {
        push_to_queue(file1, queue1);
        push_to_queue(file2, queue2);
        int counter = 6;
        for (int i = 1; i <= 7; i++) {

            if (i == 7) {
                CHECK(queue1.empty() == 1);
                CHECK(queue2.empty() == 1);
            } else {
            CHECK(queue1.front() == i);
            CHECK(queue2.front() == i*-1);
            CHECK(queue1.size() == counter);
            CHECK(queue2.size() == counter);
            CHECK(dequeue_from_queue(queue1) == i);
            CHECK(dequeue_from_queue(queue2) == i*-1);
            counter--;
            }
        }   
        
    }
}
