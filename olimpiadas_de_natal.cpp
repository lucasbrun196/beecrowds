#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct  M {
    int gold, silver, bronze;
};

struct Pm {
    string name;
    M m;
};

bool compare(Pm &pm1, Pm &pm2){
    return
        (pm1.m.gold > pm2.m.gold) ||
        (pm1.m.gold == pm2.m.gold && pm1.m.silver > pm2.m.silver) ||
        (pm1.m.gold == pm2.m.gold && pm1.m.silver == pm2.m.silver && pm1.m.bronze > pm2.m.bronze) ||
        (pm1.m.gold == pm2.m.gold && pm1.m.silver == pm2.m.silver && pm1.m.bronze == pm2.m.bronze && pm1.name < pm2.name);
}


int main(){
    string comp, l1, l2, l3;
    map<string, M> mp;
    vector<Pm> vpm;
    while(getline(cin, comp)){
        getline(cin, l1);
        getline(cin, l2);
        getline(cin, l3);
        M m;
        if(mp.find(l1) == mp.end()){
            m.gold = 1;m.silver = 0; m.bronze = 0;
            mp[l1] = m;
        }else mp[l1].gold++;
        if(mp.find(l2) == mp.end()){
            m.gold = 0;m.silver = 1; m.bronze = 0;
            mp[l2] = m;
        }else mp[l2].silver++;
        if(mp.find(l3) == mp.end()){
            m.gold = 0;m.silver = 0; m.bronze = 1;
            mp[l3] = m;
        }else mp[l3].bronze++;
    }

    for(auto p : mp){
        Pm pm;
        pm.name = p.first;
        pm.m = p.second;
        vpm.push_back(pm);
    }
    sort(vpm.begin(), vpm.end(), compare);
    cout << "Quadro de Medalhas\n";
    for(Pm p : vpm){
        cout << p.name << " " << p.m.gold << " " << p.m.silver << " " << p.m.bronze << endl;
    }
    return 0;
}