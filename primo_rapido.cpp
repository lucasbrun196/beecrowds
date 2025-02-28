#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(long long x){
    if(x == 1) return false;
    for(int i = 2; i < sqrt(x); i++){
        if(x % i == 0) return true;
    }
    return false;
}
int main(){

    long long int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(!isPrime(n)) cout << "Prime\n";
        else cout << "Not Prime\n";
    }
    return 0;
}