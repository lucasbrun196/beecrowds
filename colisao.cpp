#include <bits/stdc++.h>


struct Point{
    int x, y;
};

Point vet[4];

int verifyRPosition(Point p){
    return (p.y >= vet[0].y && p.y <= vet[2].y && p.x >= vet[3].x && p.x <= vet[1].x);
}
int main(){

    int n;
    Point rp;
    scanf("%d", &n);

    while(n--){
        for(int i = 0; i < 4; i++){
            Point p;
            scanf("%d %d", &p.x, &p.y);
            vet[i] = p;
        }
        scanf("%d %d", &rp.x, &rp.y);
        

        printf("%d\n", verifyRPosition(rp));
        

        


    }
    return 0;
}