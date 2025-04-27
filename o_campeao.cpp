#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int getScore(int b, int e, string str){
    string res = "";
    for(int i = b; i < e; i++) res.push_back(str[i]);
    return stoi(res);
    
}

int main(){

    int n, points, p1, p2, aux;
    map<string, int> mp;
    string name, n1, n2, p;
    while(true){
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> name >> points;
            mp[name] = points;
        }
        for(int i = 0; i < n/2; i++){
            cin >> n1 >> p >> n2;
            aux = p.find('-');
            p1 = getScore(0, aux, p);
            p2 = getScore(aux+1, p.size(), p);
            if(p1 > p2) mp[n1]+=5;
            else if(p2 > p1) mp[n2]+=5;
            else { mp[n1]++; mp[n2]++; }
            p1>0?mp[n1]+=(p1*3):NULL;
            p2>0?mp[n2]+=(p2*3):NULL;
        }
        pair<string, int> pb;
        pb = make_pair("Sport", mp["Sport"]);
        for(auto &p : mp) if(p.second > pb.second) pb = make_pair(p.first, p.second);
        if(pb.first == "Sport") cout << "O Sport foi o campeao com " << pb.second << " pontos :D\n";
        else cout << "O Sport nao foi o campeao. O time campeao foi o " << pb.first << " com " << pb.second << " pontos :(\n";
        cout << endl;
        mp.clear();
    }
    return 0;
}