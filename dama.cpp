#include <iostream>

using namespace std;


int main(){
    int contMovs, x1, x2, y1, y2;

    while (true){
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)break;
        contMovs = 0;
        if(x1 == x2 && y1 == y2){
            cout << contMovs << endl;
        }
        else if(x1 == x2){
            contMovs++;
            cout << contMovs << endl;
        }else if(y1 == y2){
            contMovs++;
            cout << contMovs << endl;
        }else{
            contMovs++;
            if(x1 > x2 && y1 < y2){
                while(x1 != x2 && y1 != y2){
                    x1--;
                    y1++;
                }
            }else if(x1 < x2 && y1 > y2){
                while(x1 != x2 && y1 != y2){
                    x1++;
                    y1--;
                }
            }else if(x1 < x2 && y1 < y2){
                while(x1 != x2 && y1 != y2){
                    x1++;
                    y1++;
                }
            }
            else if(x1 > x2 && y1 > y2){
                while(x1 != x2 && y1 != y2){
                    x1--;
                    y1--; 
                }
            }

            if(x1 != x2){
                contMovs++;
            }else if(y1 != y2){
                contMovs++;
            }
            cout << contMovs << endl;
        }
        
        
    }
    
    

    return 0;
}