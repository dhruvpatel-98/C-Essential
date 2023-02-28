#include <iostream>
#include <cstdlib>
#include "balanced.h"
#include <time.h>
using namespace std;

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void fisher_yates(int array[], const int length){
        srand(time(NULL));
        for(int i = 0; i < length -1; i++){
                int random_location = rand()  % (length-i);
                swap(& array[i], & array[random_location + i]);
        }
}

int prefix_sum(int array[], int last){
    int sum = 0;
    for(int i =0; i < last; i++ ){
        sum += array[i];
    }
    return sum;
}

bool non_negative_prefix_sum(int array[], int length){
 bool is_non_negative = true;
 for(int i = 0; i <= length;i++){
        int sum = prefix_sum(array , i);
        if(sum <= -1){
          is_non_negative = false;
	  break;
        }
    }
    return is_non_negative;
}

bool non_positive_prefix_sum(int array[], int length){
    bool is_non_positive = true;
    for(int i = 0; i <= length; i++){
        int sum =  prefix_sum(array, i);
        if(sum > 0){
            is_non_positive = false;
            break;
        }
    }
    return is_non_positive;
}
void print_array(int array[], int length) {
    for(int i = 0; i < length - 1; i++) {
        cout << array[i] << ", ";
    }
    cout << array[length-1] << endl;
}
void make_array(int array[], int length) {
    for (int i = 0; i < length/2; i++) {
        array[i] = 1;
    }
    for (int i = length/2; i < length+1; i++) {
        array[i] = -1;
    }
}
int lowest_depth(int array[], int length) {
    if(length == 1){
        return 1;
    }
    int sum = 0;
    int index = 0;
    int best_sum = array[0];
    for (int i = 0; i < length; i++) {
        sum += array[i];
        if (sum < best_sum) {
            index = i;
            best_sum = sum;
        }
    }

    return index;
}
int* reorder(int array[], int length) {
    int* reordered_array = new int[length-1];
    int lowest = lowest_depth(array, length);
    int big_array = length-lowest-1;
    for (int i = 0; i < big_array; i++) {
        reordered_array[i] = array[lowest+i+1];
    }
    for (int i = big_array; i < length-1; i++) {
        reordered_array[i] = array[i-big_array];
    }
    return reordered_array;
}