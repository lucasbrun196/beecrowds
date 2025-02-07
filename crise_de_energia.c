#include <stdio.h>
#include <stdlib.h>

struct Node {
    int v;
    struct Node *next, *previus;
};

struct Node* createNode(int val){
    struct Node *node = malloc(sizeof(struct Node));
    node->next = NULL;
    node->previus = NULL;
    node->v = val;
    return node;
}

int removeNode(struct Node *node, int i){
    if(node->next == node){
        return node->v;
    }else{
        int cont = 1;
        while(cont != i){
            node = node->next;
            cont++;
        }
        struct Node *aux = node->next;
        node->next->previus = node->previus;
        node->previus->next = node->next;
        return removeNode(aux, i);
    }
}

int main(){

    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        int jump = 1;
        while(1){
            struct Node *first = NULL, *last = NULL, *aux = NULL;
            for(int i = 1; i < n; i++){
                if(i == 1){
                    first = createNode(i+1);
                    last = first;
                }else{
                    aux = createNode(i+1);
                    last->next = aux;
                    aux->previus = last;
                    last = aux;
                    last->next = first;
                    first->previus = last;

                }
            }
            int ans = removeNode(first, jump);
            if(ans == 13){
                printf("%d\n", jump);
                break;
            }
            jump++;
        }
    }
    return 0;
}