#include <iostream>
#include <vector>
#include <algorithm>
#include "in_class_assignment7.h"
using namespace std;

void execute_perfect_check(vector<int> &lst) {
    for_each(lst.begin(), lst.end(), [](int num) {
        bool func_call = is_perfect_check(num);
        if (func_call == 1) {
            cout << num << " is a perfect int" <<endl;
        } else {
            cout << num << " is not a perfect int" <<endl;
        }
    });
}

bool is_perfect_check(int num) {
    int running_sum = 0;

    for(int i = 1; i <= num/2 + 1; i++) {
        if (num % i == 0) {
            running_sum += i;
        }
    }

    bool final_result = (running_sum == num);
    return final_result;
}