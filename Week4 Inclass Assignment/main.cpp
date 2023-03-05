#include <iostream>
#include "in_class_four.h"
using namespace std;
#include <stack>
#include <queue>

int main() {
    stack<int> stack1;
    queue<int> queue1;
    string file1 = "test_lst1.txt";
    string file2 = "test_lst2.txt";
    push_to_stack(file1, stack1);
    push_to_queue(file1, queue1);
    int popStack = pop_from_stack(stack1);
    int dequeue = dequeue_from_queue(queue1);
    cout << "element popped from stack " << popStack <<endl;
    cout << "element dequeued " << dequeue <<endl;
}