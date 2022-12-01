#include <iostream>
#include <fstream>

using namespace std;
int main(){
    int totalCalories = 0;
    int prevNumber = 0;

    string line;

    ifstream input("input.txt");

    while(getline(input, line)){
        if(line.empty()){
            if(totalCalories > prevNumber){
                prevNumber = totalCalories;
            }else if (prevNumber == 0){
                prevNumber = totalCalories;
            }
            totalCalories = 0;
        }else{
            totalCalories += stoi(line);
        }
    }
    cout << "Highest amount of calories " << prevNumber  << endl;
}