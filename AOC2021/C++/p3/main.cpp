#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream input("C:\\Users\\Mike\\Desktop\\School\\AOC\\AOC\\AOC2021\\C++\\p3\\input.txt");

    string letter;

    int zeros = 0;
    int ones = 0;
    int currentLetter = 0;

    while (getline(input, letter)){
        char firstLetter = letter[currentLetter];
        if (firstLetter == "0") {
            zeros++;
        } else {
            ones++;
        }
    }

    cout << zeros << endl << ones;
    return 0;
}