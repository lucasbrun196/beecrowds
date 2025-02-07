#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node *next, *previus;
};

struct Node *createNode(int v){
    struct Node *node = malloc(sizeof(struct Node));
    node->next = NULL;
    node->previus = NULL;
    node->value = v;
    return node;
}

int kill(struct Node *first, int p){
    if(first->next == first){
        return first->value;
    }else{
        int cont = 0;
        while(cont != p){
            first = first->next;
            cont++;
        }
        first->next->previus = first->previus;
        first->previus->next = first->next;
        return kill(first, p);
    }
}

int main(){

    int n, np, ns, cont = 0;
    scanf("%d", &n);
    while (cont != n){
        cont++;
        scanf("%d %d", &np, &ns);
        struct Node *first, *last, *aux;
        for(int i = 0; i < np; i++){
            if(i == 0){
                first = createNode(i+1);
                last = first;
            }else{
                aux = createNode(i+1);
                last->next = aux;
                aux->previus = last;
                first->previus = aux;
                last = aux;
                last->next = first;
            }
        }
        int ans = kill(first->previus, ns);
        printf("Case %d: %d\n", cont, ans);
    }
    

    return 0;
}