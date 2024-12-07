#include <iostream>

using namespace std;

int main(){

    int n, c, p;
    while (true){
        cin >> n;
        if(n==0) break;
        int grid[n];
        for(int i = 0; i < n; ++i) grid[i] = -1;
        bool isValid = true;
        for(int i = 0; i < n; ++i){
            cin >> c >> p;
            if(p == 0){
                if(grid[i] != -1) isValid = false;
                else grid[i] = c;
            }else{
                int indexGrid = (p) + i;
                if(abs(p) > n || grid[indexGrid] != -1) isValid = false;
                else grid[indexGrid] = c;
            }
        }
        if(isValid) {
            for(int i = 0; i < n; ++i){
                cout << grid[i];
                if(i != n-1) cout << " ";
            } 
        }
        else cout << -1;
        cout << endl;
    }
    return 0;
}