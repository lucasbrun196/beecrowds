#include <iostream>

using namespace std;

int main(){
    int x1, x2, aux, ans;

    while(true){
        cin >> x1 >> x2;
        if(x1 == 0 && x2 == 0) break;
        ans = (x1*3) - (x1+x2);
        cout << ans << endl;
    }
    return 0;
}

// x + 16 = 6
//  ----
//    3
   
   
// 16 + x = 18

// x = -16 + 18

// x = 2




// x + 1000000001 = 1
//    ---
//     3
    
    
// x + 1000000001 = 3
// x = -1000000001 + 3