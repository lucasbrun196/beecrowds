#include <iostream>
#include <stack>
#include <utility>

using namespace std;
#define MAX 1024
typedef pair<int, int> ii;

const int dirI[4] = { +1, -1, 0, 0 };
const int dirJ[4] = { 0, 0, +1, -1 };

char gp[MAX][MAX];
bool visited[MAX][MAX];

int N, M;


bool isValidPos(int i, int j){
    if((i >= 0 && i < N) && (j >= 0 && j < M)) return true;
    return false;
}

void floodFill(ii start){
    int i, j, i2, j2;
    stack<ii> st;
    visited[start.first][start.second] = 1;
    gp[start.first][start.second] = 'o';
    st.push(start);
    while(!st.empty()){
        i = st.top().first;
        j = st.top().second;
        st.pop();
        for(int k = 0; k < 4; k++){
            i2 = i + dirI[k];
            j2 = j + dirJ[k];
            if(isValidPos(i2, j2) && gp[i2][j2] == '.' && visited[i2][j2] == 0){
                st.push(make_pair(i2, j2));
                visited[i2][j2] = 1;
                gp[i2][j2] = 'o';    
            }
        }
    }

}


int main(){

    char c;
    int ans = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> c;
            gp[i][j] = c;
            visited[i][j] = 0;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(gp[i][j] == '.'){
                floodFill(make_pair(i, j));
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}