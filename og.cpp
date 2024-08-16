#include <iostream>

using namespace std;

int main(){

    int l, r;
    while(true){
        cin >> l >> r;
        if(l == 0 && r == 0) break;
        cout << l + r << endl;
    }
    return 0;
}