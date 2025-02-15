#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, longgerIndex, dif;
    bool isFirst = true;
    vector<string> vs;
    string s;
    while(true){
        cin >> n;
        if(n == 0) break;
        while(n--){
            cin >> s;
            vs.push_back(s);
        }
        longgerIndex = 0;
        for(int i = 1; i < vs.size(); i++) if(vs[i].size() > vs[longgerIndex].size()) longgerIndex = i;
        for(int i = 0; i < vs.size(); i++){
            if(i != longgerIndex){
                dif = vs[longgerIndex].size() - vs[i].size();
                for(int j = 0; j < dif; j++){
                    vs[i] = " " + vs[i];
                }
            }
        }
        if(!isFirst) cout << endl;
        for(string str : vs) cout << str << endl;
        
        isFirst = false;
        vs.clear(); 
    }
    return 0;
}