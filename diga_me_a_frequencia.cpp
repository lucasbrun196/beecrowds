#include <iostream>
#include <map>
#include <vector>

typedef struct {
    int pos, cont;
}AsciiPos;

using namespace std;

int main(){
    string vet = "";
    map<int, int> mp;
    vector<AsciiPos> va;
    int cont = 0;
    while(cin >> vet){
        if(cont != 0){
            cout << endl;
        }
        cont++;
        for(const char c : vet){
            if(mp.find((int)c) == mp.end()) mp[(int)c] = 1;
            else mp[(int)c]++;
        }
        for(auto p: mp){
            AsciiPos a;
            a.cont = p.second;
            a.pos = p.first;
            va.push_back(a);
        }
        for(int i = 0; i < va.size(); i++){
            for(int j = i+1; j < va.size(); j++){
                if((va[i].cont > va[j].cont) || (va[i].cont == va[j].cont && va[i].pos < va[j].pos)){
                    AsciiPos aux = va[i];
                    va[i] = va[j];
                    va[j] = aux;
                }
            }
        }
        for(AsciiPos a : va) cout << a.pos << " " << a.cont << endl;
        mp.clear();
        va.clear();
        
    }
    return 0;
}