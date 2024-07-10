#include <iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;
        int m = 0, j = 0, aux;
        for(int i=0;i<n;++i){
            cin >> aux;
            if(aux == 0){
                m+=1;
            }else{
                j+=1;
            }
        }
        cout << "Mary won "<< m << " times and John won " << j << " times" << endl;
    }
    return 0;
}