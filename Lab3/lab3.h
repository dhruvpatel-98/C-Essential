#ifndef LABTHREE
#define LABTHREE
void set_up_list(int newlst[], int n);
void fisher_yates(int new_lst1[],int n);
void swap(int new_lst1[], int x, int y);
bool non_negative_sum(int array[], int length);
bool non_positive_sum(int array[], int length);
bool check_array_start_postive(int array[], int length);
int prefix_sum(int array[], int length);
int lowest_valley(int array[], int length);
void p2_p1(int new_array[], int existing_array[], int lowest_valley_val, int length);
#endif