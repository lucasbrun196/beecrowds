#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string name, dist;
    double tot, cont = 0;
    
    while(getline(cin, name)){
        cont++;
        getline(cin, dist);
        tot += stoi(dist);
    }

    tot = tot / cont;
    cout << fixed << setprecision(1) << tot << endl;

    return 0;
}