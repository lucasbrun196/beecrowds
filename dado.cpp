#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int findNextToPlay(map<int, pair<int, bool>> &pos, int current, int limit){
    if(pos[current].second == false) return current;
    pos[current].second = false;
    current++;
    if(current > limit) current = 1;
    return findNextToPlay(pos, current, limit);
}

int main(){
    int p, s, n, d1, d2, aux;
    int arm[3];
    map<int, pair<int, bool>> pos;
    while (true){
        cin >> p >> s;
        if (p == 0 && s == 0) break;
        for(int i = 0; i < p; i++) pos[i+1] = make_pair(0, false);
        for (int i = 0; i < 3; i++) cin >> arm[i];
        cin >> n;
        aux = 1;
        for(int i = 0; i < n; i++){
            if(pos[aux].second){
                aux = findNextToPlay(pos, aux, p);
            }
            cin >> d1 >> d2;
            pos[aux].first += (d1 + d2);
            for(int j = 0; j < 3; j++){
                if(arm[j] == pos[aux].first){
                    pos[aux].second = true;
                    break;
                } 
            }
            if(pos[aux].first > s){
                cout << aux << endl;
                break;
            }
            aux++;
            if(aux > p) aux = 1;
        }
        
        pos.clear();
    }

    return 0;
}