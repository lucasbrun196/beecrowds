#include <iostream>
#include <map>


using namespace std;

int main(){
    int n, m, ans, dif;
    string name, as;
    map<string, string> mp;
    while(true){
        cin >> n;
        if(n==0) break;
        while(n--){
            cin >> name >> as;
            mp[name] = as;
        }
        cin >> m;
        ans = 0;
        while(m--){
            cin >> name >> as;
            if(mp.find(name) != mp.end()){
                dif = 0;
                for(int i = 0; i < mp[name].size(); i++){
                    if(as[i] != mp[name][i])dif++;
                    if(dif > 1) {
                        ans++;
                        break;
                    }
                }
            }
            
        }
        cout << ans << endl;
        mp.clear();
    }
    return 0;
}
