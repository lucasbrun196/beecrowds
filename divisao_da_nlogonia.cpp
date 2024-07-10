#include <iostream>

using namespace std;

int main(){

    int n;

    while(true){
        cin >> n;
        if(n == 0) break;

        int n1, m;
        cin >> n1 >> m;
        for(int i = 0; i < n; ++i){
            int x, y;
            cin >> x >> y;
            if(x == n1 || y == m){
                cout << "divisa\n";
            }else{
                if(x > n1 && y > m){
                    cout << "NE\n";
                }else if(x < n1 && y < m){
                    cout << "SO\n";
                }else if(x > n1 && y < m){
                    cout << "SE\n";
                }else if(x < n1 && y > m){
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}