#include <iostream>

using namespace std;

int main(){
    
    long long int year;
    while(cin >> year){
        bool isLeap = false;
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            isLeap = true;
            cout << "This is leap year.\n";

        }
        if(year % 15 == 0){
            cout << "This is huluculu festival year.\n";
        }

        if(year % 55 == 0 && isLeap == true){
            cout << "This is bulukulu festival year.\n";
        }

        if((year % 400 != 0 && (year % 4 != 0 || year % 100 == 0)) && year % 15 != 0){
            cout << "This is an ordinary year.\n";
        }
        cout << endl;
    }
}