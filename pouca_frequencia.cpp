#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t, aqnt;
    float percentage, contF, contM, size;
    cin >> t;
    vector<string> vsa, vsp, ans;
    string a, p;
    while(t--){
        cin >> aqnt;
        for(int i = 0; i < aqnt; i++){
            cin >> a;
            vsa.push_back(a);
        }
        for(int i = 0; i < aqnt; i++){
            cin >> p;
            vsp.push_back(p);
        }
        
        for(int i = 0; i < aqnt; i++){
            contF = 0.0;
            contM = 0.0;
            for(int j = 0; j < vsp[i].size(); j++){
                if(vsp[i][j] == 'A') contF++;
                else if(vsp[i][j] == 'M') contM++;
            } 
            size = vsp[i].size();
            percentage = contF/(size-contM) * 100.00;
            if(100.00-percentage<75.00) ans.push_back(vsa[i]);
        } 
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i];
            if(i != ans.size()-1) cout << " ";
        }
        cout << endl;
        vsa.clear();vsp.clear();ans.clear();
    }
    return 0;
}