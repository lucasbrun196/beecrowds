#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node{
    Node *right, *left;
    int value;
};

Node *createNode(int const &nodeValue){
    Node *node = new Node;
    node->left = nullptr;
    node->right = nullptr;
    node->value = nodeValue;
    return node;
}

void insertNode(Node *&root, const int &valueToInsert){
    if(!root){
        root = createNode(valueToInsert);
        return;
    }
    if(valueToInsert > root->value) insertNode(root->right, valueToInsert);
    else insertNode(root->left, valueToInsert);
}

vector<int> bfs(Node *&root){
    vector<int> ans;
    queue<Node*> qn;
    qn.push(root);
    while(!qn.empty()){
        Node *aux = qn.front();
        qn.pop();
        ans.push_back(aux->value);
        if(aux->left) qn.push(aux->left);
        if(aux->right) qn.push(aux->right);
    }
    return ans;
}

int main(){
    int cases, treeSize, nodeValue, cont = 1;
    cin >> cases;
    while(cases--){
        cin >> treeSize;
        Node *root;
        for(int i = 0; i < treeSize; ++i){
            cin >> nodeValue;
            if(i == 0) root = createNode(nodeValue);
            else insertNode(root, nodeValue);
        }
        vector<int> ansBfs = bfs(root);
        cout << "Case " << cont << ":\n";
        for(int i = 0; i < ansBfs.size(); ++i){
            cout << ansBfs[i];
            if(i != ansBfs.size()-1) cout << " ";
        }
        cout << endl << endl;
        cont++;
    }

    

    return 0;
}