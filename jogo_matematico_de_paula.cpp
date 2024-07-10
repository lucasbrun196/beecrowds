#include <iostream>
#include <cctype>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string e;
        cin >> e;
        int f = e[0] - '0';
        int l = e[2] - '0';
        if(f == l){
            cout << l * f << endl;
        }else if(islower(e[1])){
            cout << l + f << endl;
        }else{
            cout << l - f << endl;
        }

    }
    return 0;
}