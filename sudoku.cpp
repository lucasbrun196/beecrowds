#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vv;


bool verifyLineAndColumn(vi lc){
    vi verified;
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < verified.size(); ++j){
            if(lc[i] == verified[j]){
                return false;
            }
        }
        verified.push_back(lc[i]);
    }
    return true;
}

bool verifySubMat(vv subMat){
    vi verified;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int w = 0; w < verified.size(); ++w){
                if(subMat[i][j] == verified[w]){
                    return false;
                }
            }
            verified.push_back(subMat[i][j]);
        }
    }
    return true;
}


int main(){

    
    int n, num;
    int contIns = 0;
    bool isValid;
    vv mat, subMat;
    vi line, column;
    cin >> n;
    while(contIns < n){
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                cin >> num;
                line.push_back(num);
            }
            mat.push_back(line);
            line.clear();
        }

        for(int i = 0; i < 9; ++i){
            isValid = verifyLineAndColumn(mat[i]);
            if(!isValid){
                break;
            } 
            for(int j = 0; j < 9; ++j){
                column.push_back(mat[j][i]);
            }
            isValid = verifyLineAndColumn(column);
            column.clear();
            if(!isValid){
                break;
            }
        }

        if(isValid){
            int contSub = 0;
            int indexJ = 0;
            for(int i = 0; i < 9; ++i){
                for(int j = indexJ; j < 9; ++j){
                    line.push_back(mat[i][j]);
                    if((j+1) % 3 == 0){
                        subMat.push_back(line);
                        line.clear();
                        break;
                    }
                }
                if((i+1) % 3 == 0){
                    isValid = verifySubMat(subMat);
                    subMat.clear();
                    if(!isValid){
                        break;
                    }
                    if((contSub+1) == 9){
                        break;
                    }
                    if((i+1) == 9){
                        indexJ += 3;
                        i = -1;
                    }
                    contSub++;
                }
            } 
        }
        contIns++;
        cout << "Instancia " << contIns << endl;
        if(isValid){
            cout << "SIM\n";
        }else{
            cout << "NAO\n";
        }
        cout << endl;
        line.clear();
        subMat.clear();
        mat.clear();
    }
    
    return 0;
}