#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ord(string x, string y){
    return (x < y);
}

int main(){

    int cases, contEco;
    string number;
    vector<string> vecNumbers;
    

    while (cin >> cases){
        contEco = 0;
        vecNumbers.clear();
        for(int i = 0; i < cases; ++i){
            number.clear();
            cin >> number;
            vecNumbers.push_back(number);
        }
        
        sort(vecNumbers.begin(), vecNumbers.end(), ord);
        for(int i = 1; i < vecNumbers.size(); ++i){
            for(int j = 0; j < vecNumbers[i].size(); ++j){
                if(vecNumbers[i-1][j] == vecNumbers[i][j]){
                    contEco++;
                }else{
                    break;
                }
            }
        }

        cout << contEco << endl;

    }
    
    return 0;
}