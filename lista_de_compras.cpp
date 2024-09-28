#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main(){
    int n, space;
    string compras, compra;
    set<string> compras_set;
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin, compras);
        istringstream iss(compras);
        string compra;
        while (iss >> compra) {
            compras_set.insert(compra);
        }
        space = 0;
        for(string const &s: compras_set){
            cout << s;
            if(space != compras_set.size() -1){
                cout << " ";
            }
            space++;
        }
        cout << endl; 

        compras.clear();
        compras_set.clear();
    }
    
    return 0;
}