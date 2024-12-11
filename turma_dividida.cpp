#include <iostream>
#include <queue>
#include <vector>
#include <map>


using namespace std;

struct Node {
    int cm, level;
    Node *left, *right;
};

Node *createNode(const int &cm){
    Node *node = new Node;
    node->left = nullptr;
    node->right = nullptr;
    node->cm = cm;
    return node;
}

void insertNode(Node *&root, const int &cm){
    if(!root){
        root = createNode(cm);
        return;
    }
    if(cm > root->cm) insertNode(root->right, cm);
    else insertNode(root->left, cm);
}

vector<Node*> bfs(Node *&root){
    queue<Node*> qn;
    vector<Node*> ans;
    root->level = 0;
    qn.push(root);
    while(!qn.empty()){
        Node *aux = qn.front();
        ans.push_back(aux);
        qn.pop();
        if(aux->left){
            aux->left->level = aux->level + 1;
            qn.push(aux->left);
        } 
        if(aux->right) {
            aux->right->level = aux->level + 1;
            qn.push(aux->right);
        };
    }
    return ans;
}


int main(){

    int n, h;
    cin >> n;
    map<int, int> umap;

    Node *root;
    for(int i = 0; i < n; ++i){
        cin >> h;
        if(i == 0) root = createNode(h);
        else insertNode(root, h);
    }
    vector<Node*> ans = bfs(root);
    
    for(Node *n: ans){
        if(umap.find(n->level) == umap.end()) umap[n->level] = n->cm;
        else if(umap[n->level] > n->cm) umap[n->level] = n->cm;
    }

    for(auto pair: umap) cout << pair.first << " " << pair.second << endl;
    
    
    

    return 0;
}