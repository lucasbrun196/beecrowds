#include <iostream>


using namespace std;

int main(){
    int a, c, x, ans, prev, dif;
    while(true){
        cin >> a >> c;
        if(a == 0 && c == 0) break;
        for(int i = 0; i < c; i++){
            cin >> x;
            if(i == 0) ans = a-x;
            else if(prev > x){
                dif = prev - x;
                ans+= dif;
            }
            prev = x;
        }
        cout << ans << endl;
    }
    return 0;
}