#include <iostream>
#include <iomanip>


using namespace std;

struct Node{
    string name;
    Node *next;
};

int N;
double L, Q;

Node *createNode(string str){
    Node *node = new Node;
    node->name = str;
    node->next = nullptr;
    return node;
}

Node *rico(Node *&node){
    if(L <= Q) return node;
    L -= Q;
    return rico(node->next);
}


int main(){
    string n;
    cin >> N >> L >> Q;
    Node *first = NULL;
    Node *last = NULL;
    for(int i = 0; i < N; i++){
        cin >> n;
        Node *aux = createNode(n);
        if(i == 0){
            first = aux;
            last = aux;
        }else{
            aux = createNode(n);
            last->next = aux;
            aux->next = first;
            last = aux;
        }
    }
    Node *ans = rico(first);
    cout << ans->name << " " << fixed << setprecision(1) << L << endl;


    return 0;
}