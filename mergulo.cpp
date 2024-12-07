#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int x, y, w;

    while(cin >> x >> y){
        vector<int> vi, ans, aux;
        for(int i = 0; i < x; ++i) aux.push_back(i+1);
        
        
        for(int i = 0; i < y; ++i){
            cin >> w;
            vi.push_back(w);
        }
        sort(vi.begin(), vi.end());
        bool found;
        for(int i = 0; i < aux.size(); ++i){
            found = false;
            for(int j = 0; j < vi.size(); ++j){
                if(vi[j] == aux[i]){
                    found = true;
                    break;
                }
            }
            if(!found) ans.push_back(aux[i]);
        }
        if(ans.size() == 0) cout << "*\n";
        else{
            for(int i = 0; i < ans.size(); ++i)
                cout << ans[i] << " ";
            
            cout << endl;
        }

    }

    return 0;
}