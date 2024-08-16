#include <iostream>

using namespace std;

int main(){

    int h1, m1, h2, m2, contMin;
    while(true){
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        contMin = 0;
        while(h1 != h2 || m1 != m2){
            if(h1 == 24){
                h1 = 0;
                m1 = 0;
            }
            else if(m1 == 60){
                h1++;
                m1 = 0;
            }else{
                contMin++;
                m1++;
            }
            
        }
        cout << contMin << endl;
    }
    
    return 0;
}