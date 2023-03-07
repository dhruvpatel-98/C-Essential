#include <iostream>
#include "prefix.h"
using namespace std;

int nums_1[] = {2,-3,3,2};
int nums_2[] = {1,1,-1,-1};
int nums_3[] = {-1,-1,1,1};
int nums_4[] = {-1,-1,-1,-1};

int main () {
    cout << non_negative_sum(nums_1, sizeof(nums_1)/sizeof(nums_1[0])) <<endl;
    cout << non_negative_sum(nums_2,sizeof(nums_2)/sizeof(nums_2[0])) <<endl;
    cout << non_positive_sum(nums_3,sizeof(nums_3)/sizeof(nums_3[0])) <<endl;
    return 0;
}
