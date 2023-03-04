#include "vector.h"

vector<int_vect> read_vectors(ifstream& in_file) {
    vector<int_vect> vect;
    int id(0);
    string from, to;
    while (in_file >> from >> to) {
        int_vect i_v;
        i_v.from = atoi(from.c_str());
        i_v.to = atoi(to.c_str());
        i_v.id = id++;
        vect.push_back(i_v);
    }
    return vect;
}
void sort_vectors(vector<int_vect>& vect) {
    sort(vect.begin(),
         vect.end(),
         [](const int_vect& left, const int_vect& right) {
            return left.id > right.id;
         });
}
void print_vectors(const vector<int_vect>& vect) {
    for (auto v : vect) {
        cout << v.id << ": " << v.from << " " << v.to << endl;
    }
}