#include <iostream>

using namespace std;

int main(){
    long long int a, b, totNum, ans;
    cin >> a >> b;
    totNum = (b-a)+1;
    ans = (((a+b)*totNum)/2);
    cout << ans << endl;
    return 0;
}