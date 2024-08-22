#include <iostream>

using namespace std;

struct Node{
    int value;
    Node *right, *left;
};


Node *createNode(const int &v){
    Node *node = new Node;
    node->left = nullptr;
    node->right = nullptr;
    node->value = v;
    return node;
}

void insertNode(const int &v, Node *&root){
    if(!root){
        root = createNode(v);
        return;
    }
    if(v > root->value) insertNode(v, root->right);
    if(v < root->value) insertNode(v, root->left);
}

void infixa(Node *&root){
    if(!root) return;
    infixa(root->left);
    cout << root->value << " ";
    infixa(root->right);
}

void prefixa(Node *&root){
    if(!root) return;
    cout << root->value << " ";
    prefixa(root->left);
    prefixa(root->right);
}

void posfixa(Node *&root){
    if(!root) return;
    posfixa(root->left);
    posfixa(root->right);
    cout << root->value << " ";
}

Node *findNode(const int &v, Node *&root){
    if(!root || root->value == v) return root;
    if(v > root->value) return findNode(v, root->right);
    return findNode(v, root->left);
}



Node *remove(Node *&root, int &v){
    if(!root) return NULL;
    else{
        if(root->value == v){
            if(!root->left && !root->right){
                free(root);
                return NULL;
            }else{
                if(!root->left || !root->right){
                    Node *aux;
                    if(root->left){
                        aux = root->left;
                    }else{
                        aux = root->right;
                    }
                    free(root);
                    return aux;
                }else{
                    Node *aux = root->right;
                    while(!aux->right){
                        aux = aux->right;
                    }
                    root->value = aux->value;
                    aux->value = v;
                    root->left = remove(root->left, v);
                    return root;
                }
            }
        }else{
            if(v < root->value){
                root->left = remove(root->left, v);
            }else{
                root->right = remove(root->right, v);
            }
            return root;
        }
    }
}


int main(){

    string op;
    int valueInTree;
    Node *root = nullptr;
    while(cin >> op){
        if(op == "I"){
            cin >> valueInTree;
            if(!root){
                root = createNode(valueInTree);
            }else{
                insertNode(valueInTree, root);
            }
        }else if(op == "INFIXA"){
            infixa(root);
            cout << endl;
        }else if(op == "PREFIXA"){
            prefixa(root);
            cout << endl;
        }else if(op == "POSFIXA"){
            posfixa(root);
            cout << endl;
        }else if(op == "P"){
            cin >> valueInTree;
            Node *found = findNode(valueInTree, root);
            if(found){
                cout << valueInTree << " existe\n";
            }else{
                cout << valueInTree << " nao existe\n";
            }
        }else if(op == "R"){
            cin >> valueInTree;
            remove(root, valueInTree);
            
        }
    }

    return 0;
}