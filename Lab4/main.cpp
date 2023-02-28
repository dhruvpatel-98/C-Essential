#include <iostream>
#include "balanced.h"

using namespace std;

int main(){
int*  array;
int* array_reorder;
int runs;
int vector_size;
cout << "Enter number of runs" << endl;
cin >> runs;
cout << "Enter a value for vector_size" << endl;
cin >> vector_size;
int length = 2 * vector_size + 1;
for ( int i = 0 ; i < runs; i++ ){
    make_array(array, length);
    fisher_yates(array, length);
    array_reorder = reorder(array, length);
    cout << "array 1 \n "; 
    print_array(array, length);
    cout << "Reordered list: ";
    print_array(array_reorder, length-1);
    cout << endl;
    }
}