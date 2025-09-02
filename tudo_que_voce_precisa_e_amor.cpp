#include <bits/stdc++.h>

using namespace std;


int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int fromBinary(string x){
    int ans = 0, m = 1;
    for(int i = x.size()-1; i >= 0; i--){
        if(x[i] == '1') ans += m;
        m *= 2;
    }
    return ans;
}

int main(){

    int n, ix, iy, cont = 1;
    string x, y;
    scanf("%d", &n);
    while(n--){
        cin >> x;
        cin >> y;
        ix = fromBinary(x);
        iy = fromBinary(y);
        if(gcd(max(ix, iy), min(ix, iy)) != 1) printf("Pair #%d: All you need is love!\n", cont);
        else printf("Pair #%d: Love is not all you need!\n", cont);
        cont++;        
    }

    return 0;
}