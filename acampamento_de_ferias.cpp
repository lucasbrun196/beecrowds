#include <iostream>

using namespace std;

struct Node {
    int num;
    string name;
    Node *next, *previous;
};


Node *createNode(string name, int num) {
    Node *node = new Node;
    node->name = name;
    node->num = num;
    node->next = nullptr;
    node->previous = nullptr;
    return node;
}

void insertNode(Node *&nodeToInsert, Node *&nodeFirst, Node *&nodeEnd) {
    nodeToInsert->next = nodeFirst;   
    nodeToInsert->previous = nodeEnd;    
    nodeEnd->next = nodeToInsert;         
    nodeFirst->previous = nodeToInsert; 
    nodeEnd = nodeToInsert;         
}

Node *winner(Node *&startNode, int cont, int jumps) {
    if (startNode->next == startNode) {
        return startNode; 
    }
    while (cont < jumps) {
        if (jumps % 2 == 0) {
            startNode = startNode->previous;
        } else {
            startNode = startNode->next;  
        }
        cont++;
    }

    Node *newStartNode;
    int newNum = startNode->num;

    if (newNum % 2 == 0) {
        newStartNode = startNode->previous;
        startNode->next->previous = newStartNode;
        newStartNode->next = startNode->next;
    } else {
        newStartNode = startNode->next;  
        startNode->previous->next = newStartNode;
        newStartNode->previous = startNode->previous;
    }

    delete startNode; 

    return winner(newStartNode, 1, newNum);
}

int main() {
    int n, num;
    string name;

    while (true) {
        cin >> n;
        if (n == 0) break; 

        Node *start = nullptr;
        Node *end = nullptr;
        for (int i = 0; i < n; ++i) {
            cin >> name >> num;
            if (i == 0) {
                start = createNode(name, num);
                end = start;
                start->next = start; 
                start->previous = start;
            } else {
                Node *aux = createNode(name, num);
                insertNode(aux, start, end); 
            }
        }

        start = winner(start, 0, start->num);
        cout << "Vencedor(a): " << start->name << endl;

        delete start;
    }

    return 0;
}