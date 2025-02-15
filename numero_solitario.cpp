#include <iostream>
#include <map>

using namespace std;

int main(){

    long long int n, n1;
    map<long long int, long long int> mp;
    while(true){
        cin >> n;
        if(n == 0) break;
        while(n--){
            cin >> n1;
            if(mp.find(n1) == mp.end()) mp[n1] = 1;
            else mp[n1]++;
        }
        for(auto p : mp){
            if(p.second % 2 != 0) {
                cout << p.first << endl; 
                break;
            }
        } 
        mp.clear();
    }
    return 0;
}