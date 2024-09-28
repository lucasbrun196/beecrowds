#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


int main(){

    int n, space;
    string pline, p;
    vector<string> vs;
    cin >> n;
    cin.ignore();
    
    while (n--){
        getline(cin, pline);
        istringstream iss(pline);
        while(iss >> p){
            vs.push_back(p);
        }
        string maior, aux;
        int index_maior;
        for(int i = 0; i < vs.size(); ++i){
            maior = vs[i];
            for(int j = i; j < vs.size(); ++j){
                if(vs[j].size() > maior.size()){
                    index_maior = j;
                    maior = vs[j];
                }
            }
            if(maior != vs[i]){
                aux = vs[i];
                vs[i] = vs[index_maior];
                vs.erase(vs.begin() + index_maior);
                for(int w = i; w < vs.size(); ++w){
                    if(vs[w].size() <= aux.size()){
                        vs.insert(vs.begin() + w, aux);
                        break;
                    }
                    if(w == vs.size()-1){
                        vs.push_back(aux);
                        break;
                    }
                }

            }
        }
        space = 0;
        for(string const &s: vs){
            cout << s;
            if(space != vs.size()-1){
                cout << " ";
            }
            space++;
        }
        cout << endl;
        vs.clear();
        pline.clear();
        iss.clear();
        p.clear();

    }
    return 0;
}