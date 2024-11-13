#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, b, num;

    while (true){
        cin >> n >> b;

        if(n == 0 && b == 0) break;
        
        vector<int> numsInGlobe;
        for(int i = 0; i < b; ++i){
            cin >> num;
            numsInGlobe.push_back(num);

        }
        bool isInGlobe;
        for(int i = 0; i <= n; ++i){
            isInGlobe = false;
            for(int const &ng: numsInGlobe){
                if(i == ng){
                    isInGlobe = true;
                    break;
                }
            }
            if(!isInGlobe){
                int auxResult;
                for(int j = 0; j < numsInGlobe.size(); ++j){
                    for(int x = j+1; x < numsInGlobe.size(); x++){
                        if(numsInGlobe[j] > numsInGlobe[x]){
                            auxResult = numsInGlobe[j] - numsInGlobe[x];
                        }else{
                            auxResult = numsInGlobe[x] - numsInGlobe[j];
                        }
                        if(auxResult == i){
                            isInGlobe = true;
                            break;
                        }
                    }
                    if(isInGlobe){
                        break;
                    }
                }
                if(!isInGlobe){
                    break;
                }
            }
        }
        isInGlobe ? cout << "Y\n" : cout << "N\n";
    }
    

    return 0;
}