#include <iostream>
#include "prefix.h"
using namespace std;

int prefix_sum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

bool non_negative_sum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
        if (sum < 0) {
            return false;
        }
    }
    if(sum >= 0) {
        return true;
    }
    return 1;
}

bool non_positive_sum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
        if (sum > 0) {
            return false;
        }
    }
    if(sum <= 0) {
        return true;
    }
    return 1;
}