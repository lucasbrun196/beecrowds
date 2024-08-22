#include <iostream>

using namespace std;

int main(){
    int freq;
    int N, D;
    bool isFreqd;
    
    while(true){
        cin >> N >> D;
        if(N == 0 && D == 0) break;
        int mat[D][N];
        for(int i = 0; i < D; ++i){
            for(int j = 0; j < N; ++j){
                cin >> freq;
                mat[i][j] = freq;
            }
        }
        for(int i = 0; i < N; ++i){
            isFreqd = true;
            for(int j = 0; j < D; ++j){
                if(mat[j][i] == 0){
                    isFreqd = false;
                    break;
                }
            }
            if(isFreqd){
                cout << "yes\n";
                break;
            }
        }
        if(!isFreqd){
            cout << "no\n";
        }

        

    }

    return 0;
}