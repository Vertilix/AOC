#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream input("input.txt");

    int horizontal = 0;
    int depth = 0;
    string line;

    while(getline(input, line)){
        for(int i = 0; i<=10; i++){
            if (line == "forward "+ to_string(i)){
                horizontal +=  i;
                cout << line << horizontal << endl;
            }else if (line == "up "+ to_string(i)){
                depth -= i;
                cout << line << depth << endl;
            }else if (line == "down "+ to_string(i)){
                depth += i;
                cout << line << depth << endl;
            }
        }
    }

    cout << horizontal << depth;
    return 0;
}