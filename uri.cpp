#include <iostream>

using namespace std;



bool isPot2(int n){
    int aux = 2; 
    while(true){
        if(aux > n) return false;
        if(aux == n)break;
        aux *= 2;
    }
    return true;
}

int main(){
    int n, num, b;
    bool v;
    while(true){
        cin >> n; 
        if(n == 0) break;
        int points[3] = {0};
        int rod[n][3];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 3; j++){
                cin >> num;
                rod[i][j] = num;
            }
        }
        for(int i = 0; i < n; i++){
            b = 0;
            for(int j = 0; j < 3; j++){
                if(isPot2(rod[i][j])) points[j]++;
                if(rod[i][j] > rod[i][b]) b = j;
            }
            if(isPot2(rod[i][b]))points[b]++;
            
        }
        
        b=0;
        v = true;
        for(int i = 0; i < 3; i++) if(points[i] > points[b]) b = i;
        for(int i = 0; i < 3; i++){
            if(i != b && points[i] == points[b]){
                v = false;
                break;
            }
        } 
        
        if(!v) cout << "URI\n";
        else{
            if(b == 0) cout << "Uilton\n";
            else if(b == 1) cout << "Rita\n";
            else cout << "Ingred\n"; 
        }

    }
    return 0;
}