#include <iostream>
#include <vector>

using namespace std;




int main(){

    int n, n1, n2, p, w, wv, dif;
    bool flag;
    vector<int> vi;
    cin >> n;

    while (n--){
        cin >> n1 >> n2;
        for(int i = 0; i < n1; i++){
            cin >> p;
            vi.push_back(p);
        }
        wv = abs(vi[0] - n2);
        w = 0;
        if(wv == 0){
            cout << w + 1 << endl;
        }else{
            flag = false;
            for(int i = 1; i < n1; i++){
                dif = abs(vi[i] - n2);
                if(dif == 0){
                    flag = true;
                    cout << i + 1 << endl;
                    break;
                }else if(dif < wv){
                    wv = dif;
                    w = i;
                }
            }
            if(!flag) cout << w + 1 << endl;
        }
        vi.clear();
    }
    
    return 0;
}