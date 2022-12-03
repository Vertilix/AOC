#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

// y = draw
// x  = lose
// z = win

int main(){
    map<char,int> letter;

    letter['A']=1;
    letter['B']=2;
    letter['C']=3;
    letter['X']=1;
    letter['Y']=2;
    letter['Z']=3;

    ifstream input("input.txt");
    string line;
    vector<char>segments;
    int score = 0;
    while(getline(input, line)){
        segments.insert(segments.end(), {line[0], line[2]});
    }

    for(int i = 0; i < segments.size(); i+=2) {
        int a = letter[segments[i]]; // elf
        int b = letter[segments[i + 1]]; // action

        if (segments[i + 1] == 'X') {
            if (a == 1) b = 3;
            else if (a == 2) b = 1;
            else b = 2;
        }else if (segments[i + 1] == 'Y') {
            b = a;
        }else{
            if (a == 1) b = 2;
            else if (a == 2) b = 3;
            else b = 1;
        }

        if(b > a && !(b == 3 && a == 1) || (b == 1 && a == 3)){
            score += 6 + b;
        }else if(b == a){
            score += 3 + b;
        }else{
            score += 0 + b;
        }
    }

    cout << score;
    return 0;

}