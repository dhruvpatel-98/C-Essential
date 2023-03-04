#include <iostream>
#include "lab3.h"
using namespace std;


int main () {

    for (int n = 10; n <= 100; n+=10) {

        double outer_counter = 0;
        cout << "n = " << n <<endl;
        for (int i = 1000; i <= 25000; i+=2000) {
            int counter = 0;
            int well_bal = 0;
            for (int j = 0; j <= i; j++) {
                int new_lst1[((2*n)+1)];
                set_up_list(new_lst1, ((2*n)+1));
                fisher_yates(new_lst1, ((2*n)+1));
                int bool1 = check_array_start_postive(new_lst1, ((2*n)+1));
                if (bool1 == 0) {
                    counter+=1;
                    continue;
                }
                int lowest_valley1 = lowest_valley(new_lst1, ((2*n)+1));
                int temp_arr1[(2*n)];
                p2_p1(temp_arr1, new_lst1, lowest_valley1, ((2*n)+1));
                if ((non_positive_sum(temp_arr1, 2*n) == false) && (non_negative_sum(temp_arr1, 2*n) == false)) {
                    counter+=1;
                }
                else {
                    well_bal+=1;
                    counter+=1;
                }
            }
            double result = ((double)well_bal) / counter;
            outer_counter += result;
            cout << "Running the process " << i << " times. success rate is " << result <<endl;
        }
        cout << "Average was: " << (outer_counter/13) <<endl;
    }
}