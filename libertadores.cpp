#include <iostream>

using namespace std;

int p1, p2;
void getPoints(int t1, int t2){
    if(t1 > t2) p1+=3;
    else if(t2 > t1) p2+=3;
    else { p1++; p2++; }
}
int main(){

    int n, ti1, ti2, tv1, tv2, sd1, sd2, winner;
    string aux;
    cin >> n;
    while(n--){
        p1 = 0; p2 = 0;
        cin >> ti1; cin >> aux; cin >> ti2;
        sd1 = ti1; sd2 = ti2;
        cin >> tv1; cin >> aux; cin >> tv2;
        sd1 += tv2; sd2 += tv1;
        getPoints(ti1, ti2);
        getPoints(tv2, tv1);
        if(p1 > p2) winner = 1;
        else if(p2 > p1) winner = 2;
        else{
            if(sd1 > sd2) winner = 1;
            else if(sd2 > sd1) winner = 2;
            else{
                if(tv2 > ti2) winner = 1;
                else if(ti2 > tv2) winner = 2;
                else winner = 3; 
            }
        }
        switch (winner){
        case 1:
            cout << "Time 1\n";
            break;
        case 2:
            cout << "Time 2\n";
            break;
        default:
            cout << "Penaltis\n";
            break;
        }
    }
    return 0;
}