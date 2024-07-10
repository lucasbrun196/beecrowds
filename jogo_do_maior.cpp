#include <iostream>

using namespace std;

int main(){

    int r, p1, p2, j1, j2;
    while(r != 0){
        p1 = 0;
        p2 = 0;
        cin >> r;
        for(int i = 0; i < r; ++i){
            cin >> j1 >> j2;
            if(j1 > j2){
                p1++;
            }else if(j2 > j1){
                p2++;
            }
        }
        if(r != 0){
            cout << p1 << " " << p2 << endl;
        }
        
    }

    return 0;
}