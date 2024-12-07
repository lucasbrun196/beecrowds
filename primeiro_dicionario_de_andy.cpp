#include <iostream>
#include <set>
#include <cctype>

using namespace std;

int main(){

    set<string> ans;
    string e;
    while(getline(cin, e)){
        string aux = "";
        for(int i = 0; i <= e.size(); ++i){
            if(!isalpha(e[i])){
                if(aux != "" && ans.count(aux) == 0) ans.insert(aux);
                aux = "";
            }else
                aux += tolower(e[i]);
        } 
    }
    for(string const &s: ans) cout << s << endl; 
    
    return 0;
}
