#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        long long int ans, i = 1, aux = 0;
        string s;
        vector<long long int> seq, three;
        seq.push_back(0);
        seq.push_back(1);
        while(aux != n){
            ans = seq[i] + seq[i-1];
            seq.push_back(ans);
            i++; 
            if(seq.back() % 3 == 0){
                aux++;
                three.push_back(seq.back());
            }else{
                s = to_string(seq.back());
                for(char c : s){
                    if(c == '3'){
                        aux++;
                        three.push_back(seq.back());
                        break;
                    }
                }
            }
        }
        cout << three.back() << endl;
    }


    return 0;
}