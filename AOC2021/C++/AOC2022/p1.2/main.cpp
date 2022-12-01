#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int totalCalories = 0;

    string line;
    vector<int>sumCalories;
    ifstream input("input.txt");

    while(getline(input, line)){
        if(line.empty()){
            sumCalories.push_back(totalCalories);
            totalCalories = 0;
        }else{
            totalCalories += stoi(line);
        }
    }

    sort(sumCalories.begin(), sumCalories.end(), greater<int>());
    for (int i = 0; i < 3; ++i) {
        cout << sumCalories[i] << " ";
    }
}
