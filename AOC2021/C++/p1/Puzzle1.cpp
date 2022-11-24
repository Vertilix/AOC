#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream input("input1.txt");
    string result;
    vector<int>results;
    int increase = 0;
    
    while (getline(input, result)) {
        int i = stoi(result);
        results.push_back(i);
    }
    input.close();

    cout << results[0] << "N/A - no previous measurement" << endl;
    for (int i=1; i<results.size(); i++) {
        if (results[i] > results[i-1]){
            increase++;
            cout << results[i] << " (increased) " << increase << endl;
        }else{
            cout << results[i] << "(decreased)" << endl;
        }
    }
    return 0;
}
