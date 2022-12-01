#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int totalCalories = 0;
    vector<int>sumCalories;
    string line;
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
    cout << sumCalories[0];
}