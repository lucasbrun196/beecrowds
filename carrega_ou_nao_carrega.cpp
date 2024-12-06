#include <iostream>

using namespace std;


int main(){

    long int x, y, ans;

    while(cin >> x >> y){
        ans = x ^ y;
        cout << ans << endl;
    }
    return 0;
}