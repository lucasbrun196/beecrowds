#include <iostream>
#include <map>
#include <stack>
#include <set>
#include <vector>
#include <cctype>

using namespace std;

typedef short int shi;
map<shi, vector<shi> > gp;

shi dfs(){
    shi ans = 1;
    set<shi> visited;
    stack<shi> si;
    shi u;
    si.push(1);
    visited.insert(1);
    while(!si.empty()){
        u = si.top();
        si.pop();
        for(auto p : gp[u]){
            if(visited.count(p) == 0){
                ans++;
                visited.insert(p);
                si.push(p);
            }
        }
    }
    return ans;
}

string getNumber(int start, string vs){
    string auxS = "";
    for(int i = start; i < vs.size(); i++){
        if(isalnum(vs[i])) auxS += vs[i];
        else break;
    }
    return auxS;
}

int main(){
    shi n, aux, aux2, ans;
    string pairs, auxS1;
    while(true){
        cin >> n;
        if(n == 0) break;
        while(n--){
            cin >> pairs;
            auxS1 = getNumber(1, pairs);
            aux = stoi(auxS1);
            aux2 = stoi(getNumber((auxS1.size() + 2), pairs));
            gp[aux].push_back(aux2);
            gp[aux2].push_back(aux);
        }
        ans = dfs();
        cout << ans << endl;
        gp.clear();
    }

    return 0;
}