#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main(){

    int p, np, f, nf;
    set<int> setF;
    queue<int> qe;
    vector<int> ans;
    cin >> p;
    for(int i = 0; i < p; ++i){
        cin >> np;
        qe.push(np);
    }
    cin >> f;
    for(int i = 0; i < f; ++i){
        cin >> nf;
        setF.insert(nf);
    }
    while(!qe.empty()){
        if(setF.count(qe.front()) == 0){
            ans.push_back(qe.front());
        }
        qe.pop();
    }

    for(int i = 0; i < ans.size(); ++i){
        cout << ans[i];
        if(i != ans.size()-1){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
