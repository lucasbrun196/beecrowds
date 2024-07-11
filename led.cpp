#include <iostream>
#include <map>

using namespace std;



int main(){
    int n, cont;
    string v;
    map<char, int> led_map;
    led_map['1'] = 2;
    led_map['2'] = 5;
    led_map['3'] = 5;
    led_map['4'] = 4;
    led_map['5'] = 5;
    led_map['6'] = 6;
    led_map['7'] = 3;
    led_map['8'] = 7;
    led_map['9'] = 6;
    led_map['0'] = 6;

    cin >> n;
    while(n--){
        cont = 0;
        cin >> v;
        for(char ch:v){
            cont += led_map[ch];
        }
        cout << cont << " leds\n"; 
    }

    return 0;
}