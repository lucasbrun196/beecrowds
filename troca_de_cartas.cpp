#include <iostream>
#include <set>

using namespace std;


int totCards(set<int> &menor, set<int> &maior){
    int cont = 0;
    for(auto e: menor){
        if(maior.count(e) == 0){
            cont++;
        }
    }
    return cont;
}   


int main(){
    
    int a, b, anum, bnum, contCards;
    while (true){
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        set<int> aliceCards;
        set<int> beatrizCards;
        

        for(int i = 0; i < a; ++i){
            cin >> anum;
            aliceCards.insert(anum);
        }

        for(int i = 0; i < b; ++i){
            cin >> bnum;
            beatrizCards.insert(bnum);
        }

        if(beatrizCards.size() > aliceCards.size()){
            cout << totCards(aliceCards, beatrizCards) << endl;
        }else{
            cout << totCards(beatrizCards, aliceCards) << endl;
        }
    }
    
    return 0;
}