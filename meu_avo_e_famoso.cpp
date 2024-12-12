#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){

    int n, m, p;

    while (true){
        cin >> n >> m;
        map<int, int> rank;
        if(n == 0 && m == 0) break;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> p;
                if(rank.find(p) == rank.end()) rank[p] = 1;
                else rank[p]++;
            }
        }
        int first = 0;
        int second = 0;
        for(auto p : rank){
            if(p.second > first){
                first = p.second;
            }
        }
        for(auto p: rank){
            if(p.second > second && p.second < first){
                second = p.second;
            }
        }
        vector<int> vi;
        for(auto p : rank){
            if(p.second == second){
                vi.push_back(p.first);
            }
        }
        
        for(int i: vi){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}