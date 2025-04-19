#include <iostream>

using namespace std;

int main(){
    unsigned long long int n, cases=4, size, v, countSpaces, biggest;
    cin >> n;
    while(n--){
        cin >> size;
        unsigned long long int spaces[size];
        unsigned long long int mat[size][size];
        for(int i = 0; i < size; i++)for(int j = 0; j < size; j++){
            cin >> v;
            mat[i][j] = v*v;
        }
        for(int i = 0; i < size; i++) {
            biggest = 0;
            for(int j = 0; j < size; j++) if(mat[j][i] > biggest) biggest = mat[j][i];
            spaces[i] = biggest;
        } 
        cout << "Quadrado da matriz #" << cases << ":\n";
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                countSpaces =  ((to_string(spaces[j]).size()) - (to_string(mat[i][j]).size()));
                for(int w = 0; w < countSpaces; w++) cout << " ";
                cout << mat[i][j];
                if(j!= size-1) cout << " ";
                
            }
            cout << endl;
        }
        if(n != 0) cout << endl;
        
        
        cases++;
    }
    return 0;
}
