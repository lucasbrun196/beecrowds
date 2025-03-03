#include <iostream>
#include <stack>
#include <string.h>
#include <utility>
#include <vector>

using namespace std;

#define MAX 50
typedef pair<int, int> pii;

int N, M;
char gp[MAX][MAX];
bool visited[MAX][MAX];

const int dirI[4] = { -1, 0, 0, +1 };
const int dirJ[4] = { 0, -1, +1, 0 };

bool isValidPos(int i, int j){
    if((i >= 0 && i < N) && (j >= 0 && j < M)) return true;
    return false;
}

void floodFill(pii start){
    stack<pii> st;
    int i2, j2;
    st.push(start);
    while(!st.empty()){
        i2 = st.top().first;
        j2 = st.top().second;
        st.pop();
        for(int i = 0; i < 4; i++){
            int auxI = i2+dirI[i];
            int auxJ = j2+dirJ[i];
            if(isValidPos(auxI, auxJ) && visited[auxI][auxJ] == 0 && gp[auxI][auxJ] == 'A'){
                visited[auxI][auxJ] = 1;
                gp[auxI][auxJ] = 'T';
                st.push(make_pair(auxI,auxJ));
            }
        }
    }
}

int main(){
    char c;
    vector<pii> vp;
    while(true){
        cin >> N >> M;
        if(N == 0 && M == 0) break;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> c;
                if(c == 'T') vp.push_back(make_pair(i, j));
                gp[i][j] = c;
            }
        }
        memset(visited, 0, sizeof(visited));
        for(pii pair : vp) floodFill(pair);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cout << gp[i][j];
            }
            cout << endl;
        }
        cout << endl;
        vp.clear();
    }

    return 0;
}