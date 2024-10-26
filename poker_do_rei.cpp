#include <iostream>

using namespace std;

int main(){

    int vecCards[3];
    int card;

    while (true){
        for(int i = 0; i < 3; ++i){
            cin >> card;
            vecCards[i] = card;
        }
        bool impossible = false;


        if(vecCards[0] == 0 && vecCards[1] == 0 && vecCards[2] == 0) break;

        if(vecCards[0] == vecCards[1] && vecCards[1] == vecCards[2] && vecCards[2] == vecCards[0]){
            if(vecCards[0] == 13){
                impossible = true;
            }else{
                for(int i = 0; i < 3; ++i){
                    vecCards[i]++;
                }
            }
        }else if(vecCards[0] != vecCards[1] && vecCards[1] != vecCards[2] && vecCards[2] != vecCards[0]){
            vecCards[0] = 1;
            vecCards[1] = 1;
            vecCards[2] = 2;
        }else{
            int difIndex, difCard, contDiff = 0;
            for(int i = 0; i < 3; ++i){
                for(int j = 0; j < 3; ++j){
                    if(vecCards[i] != vecCards[j]){
                        difCard = vecCards[i];
                        difIndex = i;
                        contDiff++;
                    }
                }
                if(contDiff == 2)break;
                contDiff = 0;
            }
            bool updated = false;
            for(int i = 0; i < 3; ++i){
                if(i != difIndex){
                    if((difCard == 13 && vecCards[i] < 12)){
                        vecCards[i]++;
                        if(updated == false){
                            vecCards[difIndex] = 1;
                            updated = true;
                        }
                    }else if(vecCards[i] == 12 && difCard == 13){
                        vecCards[i]++;
                        vecCards[difIndex] = 1;

                    }else if((vecCards[i] == 13 && difCard == 12)){
                        vecCards[i] = 1;
                        vecCards[difIndex] = 1;   
                    
                    }else{
                        if(!updated){
                            vecCards[difIndex]++;
                            updated = true;
                            if(vecCards[difIndex] == vecCards[i]){
                                vecCards[difIndex]++;
                            }
                        }
                        
                    }
                }
            }
        }

        if(impossible){
            cout << "*\n";
        }else{
            for(int i = 0; i < 3; ++i){
                int aux = vecCards[i];
                for(int j = 0; j < 3; ++j){
                    if(aux < vecCards[j]){
                        vecCards[i] = vecCards[j];
                        vecCards[j] = aux;
                        break;
                    }
                }
            }
            for(int i = 0; i < 3; ++i){
                cout << vecCards[i];
                if(i != 2){
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}