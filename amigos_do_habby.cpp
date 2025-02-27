#include <iostream>
#include <vector>
#include <utility>

using namespace std;

struct Amigo{
    string op, name;
    int pos;
};

void ord(vector<Amigo> &vec, int beg, int end){
    for(int i = beg; i < end; i++){
        for(int j = i+1; j < end; j++){
            if(vec[i].name > vec[j].name){
                Amigo aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}

int main(){
    vector<Amigo> va;
    string ioName, ioOp, winner;
    vector<string> ordem;
    int cont = 0;
    while(true){
        cin >> ioName;
        if(ioName == "FIM") break;
        cin >> ioOp;
        bool wasFound = false;
        if(ioOp == "YES"){
            for(Amigo am : va){
                if(am.name == ioName){
                    wasFound = true;
                    break;
                }
            }
        }
        if(!wasFound){
            Amigo a;
            a.op = ioOp;
            a.name = ioName;
            a.pos = cont;
            if(a.op == "YES")ordem.push_back(a.name);
            va.push_back(a);
            cont++;
        }

    }
    for(int i = 0; i < va.size(); i++){
        for(int j = 0; j < va.size(); j++){
            if(va[j].op == "YES" && va[i].op == "NO" && j > i){
                Amigo aux = va[j];
                va[j] = va[i];
                va[i] = aux;
            }
        }
    }

    int firtsNoIndex = 0;

    for(int i = 0; i < va.size(); i++){
        if(va[i].op == "NO"){
            firtsNoIndex = i;
            break;
        }
    }

    ord(va, firtsNoIndex, va.size());
    ord(va, 0, firtsNoIndex);
    vector<Amigo> vs; 
    int highest = 0;
    
    for(int i = 0; i < firtsNoIndex; i++){
        if(va[i].name.size() == va[highest].name.size()){
            vs.push_back(va[i]);
        }
        else if(va[i].name.size() > va[highest].name.size()){
            highest = i;
            vs.clear();
            vs.push_back(va[i]);
           
        }
    }

    Amigo ans = vs[0];
    for(Amigo aa: vs){
        if(aa.pos < ans.pos){
            ans = aa;
        }
    }
    for(Amigo aa: va) cout << aa.name << endl;
    cout << endl;
    cout << "Amigo do Habay:\n";
    cout << ans.name << endl;
    




    return 0;
}