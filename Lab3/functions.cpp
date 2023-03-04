#include <iostream>
#include "lab3.h"
using namespace std;

void set_up_list(int new_lst1[],int n) {
    int pos = 1;
    int minus = -1; 
    for (int i = 0; i < n; i++) {
        if (i < (n/2)) {
            new_lst1[i] = pos;
        } else {
            new_lst1[i] = minus;
        }
    }
}

void swap(int new_lst1[], int x, int y) {
    int temp = new_lst1[x];
    new_lst1[x] = new_lst1[y];
    new_lst1[y] = temp;
}

void fisher_yates(int new_lst1[],int n) {
    for(int i = n-1; i >= 0; i--) {
        int rand1 = rand() % n;
        swap(new_lst1, i, rand1);
        // int temp = new_lst1[i];
        // new_lst1[i] = new_lst1[rand1];
        // new_lst1[rand1] = temp;        
    }
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

bool check_array_start_postive(int array[], int length) {
    if (length == 0) {
        return false;
    }
    if (array[0] == -1) {
        return false;
    } else {
        return true;
    }
    return 1;
}

int prefix_sum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

int lowest_valley(int array[], int length) {
    int temp_val = array[0];
    int final_low_index = 0;
    for (int i = 0; i < length; i++) {
        int x = prefix_sum(array, i+1);
        if (x < temp_val) {
            temp_val = x;
            final_low_index = i;
        }
    }
    return final_low_index;
}

void p2_p1(int new_array[], int existing_array[], int lowest_valley_val, int length) {
    for(int i = 0; i < length-lowest_valley_val-1; i++) {
        new_array[i] = existing_array[lowest_valley_val+i+1];
    }

    for(int i = 0; i < lowest_valley_val; i++) {
        new_array[length-lowest_valley_val+i-1] = existing_array[i];
    }
}