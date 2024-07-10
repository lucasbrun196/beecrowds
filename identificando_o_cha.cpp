#include <iostream>

using namespace std;

struct nd{
    int type;
    nd *next;
};

int main(){
    int t;
    int tot = 0;
    cin >> t;
    nd *first = new nd;
    nd *per = first;
    for(int i = 0; i < 5; ++i){
        int c;
        if(i == 0){
            cin >> c;
            first->type = c;
            first->next = nullptr;
        }else{
            cin >> c;
            nd *aux = new nd;
            aux->type = c;
            aux->next = nullptr;
            first->next = aux;
            first = aux;
        }
    }
    do{
        if(per->type == t){
            tot++;
        }
        per = per->next;
    } while(per != nullptr);
    
    cout << tot << endl;

    return 0;
}