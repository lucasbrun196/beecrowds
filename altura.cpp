#include <iostream>
#include <map>

using namespace std;

int main(){

    int nc, n, h, aux, size;
    map<int, int> mp;
    cin >> nc;
    while(nc--){
        cin >> n;
        size = n;
        while(n--){
            cin >> h;
            if(mp.find(h) != mp.end()) mp[h]++;
            else mp[h] = 1;;
        }
        aux = 0;
        for(auto m : mp){
            for(int i = 0; i < m.second; i++){
                cout << m.first;
                if(aux != size-1)cout << " ";
                aux++;
            } 
        }
        cout << endl;
        mp.clear();
    }


}