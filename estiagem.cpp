#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

bool ord(pair<int, int> a, pair<int, int> b){
    return (a.second < b.second);
}

int main(){

    int n, cont = 1, x, y, previusX, previusY;
    bool changed;
    double tot, pes, ans;
    vector<pair<int, int> > vp;
    while(true){
        cin >> n;
        if(n == 0) break;
        tot=0.0;pes=0.0;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            pair<int, int> newPair = make_pair(x, y/x);
            changed = false;
            for(int i = 0; i < vp.size(); i++){
                if(vp[i].second == newPair.second){
                    previusX = newPair.first + vp[i].first;
                    previusY = ((vp[i].second * vp[i].first) + (newPair.second * newPair.first));
                    vp.erase(vp.begin() + i);
                    vp.push_back(make_pair(previusX, previusY/previusX));
                    changed = true;
                    break;
                }
            }
            if(!changed){
                vp.push_back(newPair);
            } 
            pes += x;
            tot += y;
        }

        sort(vp.begin(), vp.end(), ord);
        
        cout << "Cidade# " << cont << ":\n";
        for(int i = 0; i < vp.size(); i++){
            cout << vp[i].first << "-" << vp[i].second << " ";
        }
        ans = floor((tot/pes) * 100) / 100;
        cout << endl <<"Consumo medio: " << fixed << setprecision(2) << ans << " m3.\n\n";

        vp.clear();
        cont++;

    }
    return 0;
}