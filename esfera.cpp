#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r, v;
    cin >> r;
    const double pi = 3.14159;
    v = (4/3.0) * pi * (r * r * r);
    cout << "VOLUME = " << fixed << setprecision(3) << v << endl;
    
    return 0;
}
