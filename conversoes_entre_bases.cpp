#include <iostream>
#include <string>
#include <math.h>
#include <cctype>

using namespace std;

int binaryToDecimal(const string num){
    int result_dec = 0;
    int base_dec = 1;
    for(int i = num.length(); i > 0; --i){
        if(num[i - 1] == '1'){
            result_dec += base_dec;
        }
        base_dec *= 2;
    }
    return result_dec;
}

string addZeroToHex(string &num){
    if(num.length() % 4 == 0){
        return num;
    } 
    num = "0" + num;
    return addZeroToHex(num);
}

string hexLetters(string aux){
    if(aux == "10"){
        aux = "a";
    }else if(aux == "11"){
        aux = "b";
    }else if(aux == "12"){
        aux = "c";
    }else if(aux == "13"){
        aux = "d";
    }else if(aux == "14"){
        aux = "e";
    }else if(aux == "15"){
        aux = "f";
    }
    return aux;
}
int hexNumbers(char aux){
    int n;
    if(aux == 'a'){
        n = 10;
    }else if(aux == 'b'){
        n = 11;
    }else if(aux == 'c'){
        n = 12;
    }else if(aux == 'd'){
        n = 13;
    }else if(aux == 'e'){
        n = 14;
    }else if(aux == 'f'){
        n = 15;
    }
    return n;
}

string binaryToHex(string num){
    num = addZeroToHex(num);
    string convertToBin = "";
    string hex = "";
    for(int i = num.length() -1; i >= 0; --i){ 
        convertToBin = num[i] + convertToBin;
        if(i % 4 == 0 || i == 0){
            string aux = hexLetters(to_string(binaryToDecimal(convertToBin)));
            hex = aux + hex;
            convertToBin = "";
        }
    }
    return hex;
}

string decToHexBin(int num, int base){
    string snum = "";
    string res = "";
    int aux;
    while(true){ 
        if(num < base){
            string num2 = "";
            if(base == 16){
                num2 = hexLetters(to_string(num));
                snum = num2 + snum;
                break;
            }
            snum = to_string(num) + snum;
            break;
        }
        aux = num % base; 
        num = num / base;
        if(base == 16){
            res = hexLetters(to_string(aux));
        }else{
            res = to_string(aux);
        }
        
        snum = res + snum;
    }
    return snum;
}

int hexToDec(string num){
    int numDec = 0, exp = 0;
    for(int i = num.length() -1; i >= 0; --i){
        int x = 0;
        if(isalpha(num[i])){
            x = hexNumbers(num[i]);
        }else{
            x = num[i] - '0';
        }
        numDec = numDec + pow(16, exp) * x;
        exp++;
    }
    return numDec;
}

string hexToBin(string num){
    string bin = "";
    for(int i = num.length() -1; i >= 0; --i){
        int x = 0;
        if(isalpha(num[i])){
            x = hexNumbers(num[i]);
        }else{
            x = num[i] - '0';
        }
        string aux = "";
        int div;
        while(true){
            if(x < 2){
                aux = to_string(x) + aux;
                break;
            }
            div = x % 2;
            x = x / 2;
            aux = to_string(div) + aux;
        }
        aux = addZeroToHex(aux);
        bin = aux + bin;
    }
    for(int i = 0; i < bin.length(); ++i){
        if(bin[i] == '1'){
            break;
        }else{
            bin.erase(bin.begin() + i);
            i = i-1;
        }
    }
    return bin;
}

int main(){

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string base, num;
        cin >> num;
        cin >> base;
        cout << "Case " << i+1 << ":" << endl;
        if(base == "bin"){
            cout << binaryToDecimal(num) << " dec" << endl;
            cout << binaryToHex(num) << " hex" << endl;
            cout << endl;
        }else if(base == "dec"){
            cout << decToHexBin(stoi(num), 16) << " hex" << endl;
            cout << decToHexBin(stoi(num), 2) << " bin" << endl;
            cout << endl;
        }else{
            cout << hexToDec(num) << " dec" << endl;
            cout << hexToBin(num) << " bin" << endl;
            cout << endl;
        }
    }
    return 0;
}


