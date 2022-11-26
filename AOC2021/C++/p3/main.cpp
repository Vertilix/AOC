#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    
    // Initializing base value to 1, i.e 2^0
    int base = 1;
    
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
        dec_value += base;
        base = base * 2;
        }
    
    return dec_value;
}

int main(){
    ifstream input("input.txt");

    vector<string>results;

    string letter;
    string gamma = "";
    string epsilon = "";

    int numberOfLines = 0;
    int ones = 0;

    while (getline(input, letter)) {
        results.push_back(letter);
        numberOfLines++;
    }

    for(int i =0; i < results[0].size(); i++){
        for(int j = 0; j < numberOfLines; j++){
            if(results[j][i] == '1'){
                ones++;
            }
        }
        if(ones > results.size()/2){
            gamma += '1';
        }else{
            gamma += '0';
        }
    ones = 0;
    }

    // Getting the epsilon value
    for(char x: gamma){
        if (x == '0'){
            epsilon += '1';
        }else{
            epsilon += '0';
        }
    }

    cout << binaryToDecimal(gamma) << endl << binaryToDecimal(epsilon);
    return 0;
}

