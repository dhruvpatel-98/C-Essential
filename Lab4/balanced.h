#ifndef __SCRAMBLER_H
#define __SCRAMBLER_H


int prefix_sum(int array[], int last); 
bool non_negative_prefix_sum(int array[], int length);
bool non_positive_prefix_sum(int array[], int length);
void swap (int *a, int *b);
void print_array(int array[], int length);
void fisher_yates(int array[], const int length);
void make_array(int array[], int length);
int* reorder(int array[], int length);
int lowest_depth(int array[], int length);
#endif


