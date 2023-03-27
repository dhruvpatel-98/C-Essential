#include "graph.h"

vector<vector<int>> read_graph(ifstream& in_file) {
    vector<vector<int>> graph;
    string line;
    while (getline(in_file, line)) {
        vector<int> vector;
        stringstream str(line);
        int number;
        while (str >> number) {
            vector.push_back(number);
        }
        graph.push_back(vector);
    }
    return graph;
}
