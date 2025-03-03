#include <iostream>
#include <stack>
#include <utility>

using namespace std;

#define MAX 5
typedef pair<int, int> pii;

int gp[MAX][MAX];
int visited[MAX][MAX];

const int dirI[4] = { 0, 0, -1, +1 };
const int dirJ[4] = { +1, -1, 0, 0 };

bool isValidPos(int i, int j){
    if((i >= 0 && i < MAX) && (j >= 0 && j < MAX)) return true;
    return false;
}

bool floodFill(){
    int i, j, i2, j2;
    stack<pii> st;
    visited[0][0] = 1;
    st.push(make_pair(0, 0));
    while(!st.empty()){
        i = st.top().first;
        j = st.top().second;
        st.pop();
        if(i == MAX-1 && j == MAX-1) break;
        for(int k = 0; k < 4; k++){
            i2 = i + dirI[k];
            j2 = j + dirJ[k];
            if(isValidPos(i2, j2) && visited[i2][j2] == 0 && gp[i2][j2] == 0){
                st.push(make_pair(i2, j2));
                gp[i2][j2] = 1;
                visited[i2][j2] = 1;
            }
        }
    }
    if(gp[MAX-1][MAX-1] == 1) return true;
    return false;
}

int main(){

    int n, v;
    cin >> n;
    while(n--){
        for(int i = 0; i < MAX; i++) for(int j = 0; j < MAX; j++) visited[i][j] = 0;
        for(int i = 0; i < MAX; i++){
            for(int j = 0; j < MAX; j++){
                cin >> v;
                gp[i][j] = v;
            }
        }
        if(floodFill()) cout << "COPS\n";
        else cout << "ROBBERS\n";
        
        
    }
    
    return 0;
}