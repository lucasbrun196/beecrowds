#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, b, h;
    double y1, y2, c1, c2, t1, c;
    cin >> n;
    while(n--){
        cin >> y1 >> c1 >> y2 >> c2;
        c1 = c2 - c1;
        y1 = y2 - y1;
        t1 = c1 / y1;
        b = t1;
        c = t1 - b;
        h = c * 100;
        cout << b << ",";
        if(h == 0) cout << "00" << endl;
        else cout << h << endl;
        
        
        

    }
    return 0;
}