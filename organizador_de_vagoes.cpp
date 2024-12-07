#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

int isOrd(vi &vags, vi &aux){
    for(int i = 0; i < vags.size(); ++i){
        if(vags[i] != aux[i]) return i;
    }
    return -1;
}

void ord(int const index, vi &vags){
    for(int i = index+1; i < vags.size(); ++i){
        if(vags[index] > vags[i]){
            int aux = vags[index];
            vags[index] = vags[i];
            vags[i] = aux;
            return;
        }
    }
}

int main(){

    int n, vagN, vag, swapConts;
    vi vags, ordVagsAux;
    
    cin >> n;

    while(n--){
        cin >> vagN;
        for(int i = 0; i < vagN; ++i){
            cin >> vag;
            ordVagsAux.push_back(i+1);
            vags.push_back(vag);
        }
        swapConts = 0;
        while(true){
            int indexToSwap = isOrd(vags, ordVagsAux);
            if(indexToSwap == -1) break;
            ord(indexToSwap, vags);
            swapConts++;
        }
        cout << "Optimal train swapping takes " << swapConts << " swaps." << endl;
        ordVagsAux.clear();
        vags.clear();
    }
    

    return 0;
}
