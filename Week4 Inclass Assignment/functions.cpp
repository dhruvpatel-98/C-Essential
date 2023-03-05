#include <iostream>
#include <stack>
#include <fstream>
#include <queue>
#include "in_class_four.h"
using namespace std;

void push_to_stack(string &file_name, stack<int> &stack) {
    ifstream file(file_name);

    try {
        if (file.is_open() == 1) {
            
            int sum = 0;
            int num = 0;

            while(file >> num) {
                int temp = num;
                stack.push(temp);
                sum += temp;
            }
            if (sum < 0) {
                file.close();
                throw runtime_error("negative sum");
            }
            file.close();
        }

    }
    catch(runtime_error){
        throw;
    }
}

int pop_from_stack(stack<int> &stack) {
    if (stack.empty()) 
    { 
        return 0; 
    };
    int temp = stack.top();
    stack.pop();
    return temp;
}

void push_to_queue(string &file_name, queue<int> &queue) {
    ifstream file(file_name);


        if (file.is_open() == 1) {
            
            int num = 0;

            while(file >> num) {
                int temp = num;
                queue.push(temp);
            }
            file.close();
        }

   
}

int dequeue_from_queue(queue<int> &queue) {
    if (queue.empty()) 
    { 
        return 0; 
    };
    int temp = queue.front();
    queue.pop();
    return temp;
}
