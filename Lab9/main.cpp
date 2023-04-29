#include <iostream>
#include <vector>
#include "lab9.h"
using namespace std;

int main() {
    vector<vector<int>> test1 = create_matrix(4, 4);
    vector<vector<int>> test2 = create_matrix(4, 4);
    vector<vector<int>> final = matrix_multiply(test1, test2);
    print_matrix(test1);
    cout << "---------------" <<endl;
    print_matrix(test2);
    cout << "---------------" <<endl;
    print_matrix(final);
    return 0;
}