#ifndef __VECTOR_FUNCTIONS_
#define __VECTOR_FUNCTIONS_

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include "vector.h"

using namespace std;

struct int_vect {
    int id;
    int from;
    int to;
};

vector<int_vect> read_vectors(ifstream& in_file);
void sort_vectors(vector<int_vect>& vect);
void print_vectors(const vector<int_vect>& vect);

#endif