#include <iostream>
#include <vector>

using namespace std;

struct Node {
    char v;
    Node *left, *right;
};

Node *createNode(const char v){
    Node *node = new Node;
    node->v = v;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void insert(const char value, Node *&root){
    if(!root) {
        root = createNode(value);
        return;
    }
    if(value > root->v){
        insert(value, root->right);
    }else {
        insert(value, root->left);
    }
}

void infixa(Node *root, vector<char> &vec){
    if(!root) return;
    infixa(root->left, vec);
    vec.push_back(root->v);
    infixa(root->right, vec);
}

void posfixa(Node *root, vector<char> &vec){
    if(!root) return;
    posfixa(root->left, vec);
    posfixa(root->right, vec);
    vec.push_back(root->v);
}

void prefixa(Node *root, vector<char> &vec){
    if(!root) return;
    vec.push_back(root->v);
    prefixa(root->left, vec);
    prefixa(root->right, vec);
}

Node * find(Node *root, const char &toFind){
    if(!root || root->v == toFind){
        return root;
    }else if(toFind > root->v){
        return find(root->right, toFind);
    }else{
        return find(root->left, toFind);
    }
}

int main(){
    string comand;
    char v_to_insert;
    Node *root = nullptr;
    while(cin >> comand){
        if(comand == "I"){
            cin >> v_to_insert;
            if(!root){
                root = createNode(v_to_insert);
            }else{
                insert(v_to_insert, root);
            }
        }else if(comand == "P"){
            cin >> v_to_insert;
            if(find(root, v_to_insert)){
                cout << v_to_insert << " existe\n";
            }else{
                cout << v_to_insert << " nao existe\n";
            }
        }else{
            vector<char> letters;
            comand == "INFIXA" ? infixa(root, letters)
            : comand == "POSFIXA" ? posfixa(root, letters)
            : prefixa(root, letters);
            for(int i = 0; i < letters.size(); ++i){
                if(i == letters.size()-1){
                    cout << letters[i];
                }else{
                    cout << letters[i] << " ";
                } 
            }
            cout << endl;
        }
    }
    return 0;
}
