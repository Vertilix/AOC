#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream input("input.txt");

    int horizontal;
    int depth;

    string line;

    while(getline(input, line)){
        for(int i = 0; i<9; i++){
            if (line == "forward "+ to_string(i)){
                horizontal += i;
                cout << line << endl;
            }else if (line == "up "+ to_string(i)){
                depth += i;
                cout << line << endl;
            }else if (line == "down "+ to_string(i)){
                depth -= i;
                cout << line << endl;
            }
        }
    }

    cout << horizontal << depth;
    return 0;
}