#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream input("input.txt");
    string result;
    vector<int>results;

    while (getline(input, result)) {
        int i = stoi(result);
        results.push_back(i);
    }
    input.close();

    cout << results[0] << "N/A - no previous measurement" << endl;
    for (int i=1; i<results.size(); i++) {
        if (results[i] > results[i-1]){
            cout << results[i] << "(increased)" << endl;
        }else{
            cout << results[i] << "(decreased)" << endl;
        }
    }

    return 0;
}