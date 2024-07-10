#include <iostream>

using namespace std;

int main(){

    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n2 = 0;
    int n1 = 0;
    int n;
    cin >> n;
    cout << n << endl;
    if(n >= 100){
        n100 = n / 100;
        n = n % 100;
    }if(n >= 50){
        n50 = n / 50;
        n = n % 50;
    }if(n >= 20){
        n20 = n / 20;
        n = n % 20;
    }if(n > 10){
        n10 = n / 10;
        n = n % 10;
    }if(n >= 5){
        n5 = n / 5;
        n = n % 5;
    }if(n >= 2){
        n2 = n / 2;
        n = n % 2;
    }if(n == 1){
        n1 = 1;
    }

    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n1 << " nota(s) de R$ 1,00\n";

    return 0;
}