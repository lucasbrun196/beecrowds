
/*
    TO PRACTICE LINKED LISTS AND RECURSIVITY 
*/

#include <iostream>

using namespace std;

struct Shoes{
    int size;
    char side;
    bool wasVerified;
    Shoes *next;
};

void insertShoe(Shoes *&shoe, Shoes *&newShoe){
    if(!shoe->next){
        shoe->next = newShoe;
        return;
    }
    insertShoe(shoe->next, newShoe);
}

void createShoe(Shoes *&shoe, const int sz, const char sd){
    Shoes *newShoe = new Shoes;
    newShoe->size = sz;
    newShoe->side = sd;
    newShoe->wasVerified = false;
    newShoe->next = nullptr;
    insertShoe(shoe, newShoe);
}

void findOtherShoe(Shoes *&shoe, const int sz, const char sd, int &contPairs){
    if(!shoe) return;
    if(shoe->side != sd && shoe->size == sz && !shoe->wasVerified){
        shoe->wasVerified = true;
        contPairs++;
        return;
    }
    findOtherShoe(shoe->next, sz, sd, contPairs);
}

void pairsVerify(Shoes *&shoe, int &contPairs){
    if(!shoe) return;
    findOtherShoe(shoe->next, shoe->size, shoe->side, contPairs);
    pairsVerify(shoe->next, contPairs);
}

int main(){

    int qtd;

    while(cin >> qtd){
        Shoes *shoe;
        int contPairs = 0;
        for(int i = 0; i < qtd; ++i){
            int sz;
            char sd; 
            cin >> sz >> sd;
            if(i == 0){
                shoe = new Shoes;
                shoe->size = sz;
                shoe->side = sd;
                shoe->wasVerified = false;
                shoe->next = nullptr;
            }else{
                createShoe(shoe, sz, sd);
            }
        }
        pairsVerify(shoe, contPairs);
        cout << contPairs << endl;
    }
    return 0;
}