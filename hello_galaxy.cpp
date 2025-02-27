#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n, years, time, olderT;
    string name, olderN;
    vector<string> names;
    vector<int> t;

    while(true){
        cin >> n;
        if(n == 0) break;
        while(n--){
            cin >> name >> years >> time;
            names.push_back(name);
            t.push_back((years-time));
        }
        olderN = names[0];
        olderT = t[0];
        for(int i = 1; i < t.size(); i++){
            if(t[i] < olderT){
                olderT = t[i];
                olderN = names[i];
            }
        }
        cout << olderN << endl;
        names.clear();
        t.clear();
    }

    return 0;
}