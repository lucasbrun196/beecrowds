#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rena{
    string name;
    int weight, age;
    double height;
};


bool compare(Rena &r1, Rena &r2){
    return 
        (r1.weight > r2.weight) ||
        (r1.weight == r2.weight && r1.age < r2.age) ||
        (r1.weight == r2.weight && r1.age == r2.age && r1.height < r2.height) ||
        (r1.weight == r2.weight && r1.age == r2.age && r1.height == r2.height && r1.name < r2.name);
}

int main(){

    int t, n, m, w, a, cont = 1;
    double h;
    string name;
    vector<Rena> vr;
    cin >> t;
    while (t--){
        cin >> n >> m;

        while(n--){
            cin >> name >> w >> a >> h;
            Rena r;
            r.name = name; r.weight = w; r.age = a; r.height = h;
            vr.push_back(r);
        }

        sort(vr.begin(), vr.end(), compare);
        cout << "CENARIO {" << cont << "}\n";
        for(int i = 0; i < m; i++) cout << i+1 << " - " << vr[i].name << endl;
        vr.clear();
        cont++;
        
    }
    
    return 0;
}

