#include <stack>
#include <queue>
using namespace std;
#ifndef IN_CLASS_FOUR
#define IN_CLASS_FOUR
void push_to_stack(string &file_name, stack<int> &stack);
int pop_from_stack(stack<int> &stack);
void push_to_queue(string &file_name, queue<int> &queue);
int dequeue_from_queue(queue<int> &queue);
#endif