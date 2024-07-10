#include <iostream>

using namespace std;

int main(){

    int n, index, maior;
    string f, s, res;
    
    cin >> n;
    
    while(n--){
        cin >> f >> s;
        index = 0;
        res = "";
        if(f.length() >= s.length()){
            maior = f.length();
        }else{
            maior = s.length();
        }
        while(index < maior){
            if(index < f.length()){
                res += f[index];
            }
            if(index < s.length()){
                res += s[index];
            }
            index++;
        }
        cout << res << endl;
    }


    return 0;
}