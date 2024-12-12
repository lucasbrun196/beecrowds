#include <iostream>

using namespace std;

int main(){

    string pos = "NLSO";
    int n;
    char direction;
    while(true){
        cin >> n;
        if(n == 0) break;
        int init = 0;
        for(int i = 0; i < n; ++i){
            cin >> direction;
            if(direction == 'D') init++;
            else init--;

            if(init == 4) init = 0;
            else if(init == -1) init = 3;
        }
        cout << pos[init] << endl;
    }
    return 0;
}