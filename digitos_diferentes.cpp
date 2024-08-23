#include <iostream>

using namespace std;

bool containsEqual(string num){
    bool isEqual = false;
    for(int i = 0; i < num.size(); ++i){
        for(int j = i+1; j < num.size(); ++j){
            if(num[i] == num[j]){
                isEqual = true;
                break;
            }
        }
        if(isEqual == true){
            break;
        }
    }
    return isEqual;
}

int main(){
    int start, end, cont;
    while(cin >> start && cin >> end){
        cont = 0;
        for(int i = start; i <= end; ++i){
            if(containsEqual(to_string(i)) == false){
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}