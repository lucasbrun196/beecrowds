#include <bits/stdc++.h>

using namespace std;

int euclides(int x, int y){
    if(y == 0) return x;
    return euclides(y, x % y);
}

int main(){

    int x, y, z;
    int ans;

    while(cin >> x >> y >> z){
        if(x > y) swap(x, y);
        if(y > z) swap(y, z);
        
        ans = 0;
        if(pow(z, 2) == (pow(x, 2) + pow(y, 2))){
            ans++;
            if(euclides(z, (euclides(max(x, y), min(x, y)))) == 1) ans++;
        }
        
        switch (ans)
        {
        case 1:
            cout << "tripla pitagorica\n";
            break;
        case 2:
            cout << "tripla pitagorica primitiva\n";
            break;
        default:
            cout << "tripla\n";
            break;
        }
    }
    return 0;
}