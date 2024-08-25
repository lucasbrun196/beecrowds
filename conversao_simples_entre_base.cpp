#include <iostream>
#include <unordered_map>
#include <math.h>

using namespace std;


char convertLetter(int aux){
    if(aux == 10){
        return'A';
    }else if(aux == 11){
        return'B';
    }else if(aux == 12){
        return'C';
    }else if(aux == 13){
        return'D';
    }else if(aux == 14){
        return'E';
    }else{
        return'F';
    }
}

string decToHex(int numb){
    string result = "";
    int aux;
    while(true){
        if(numb < 16){
            if(numb > 9){
                result = convertLetter(numb) + result;
            }else{
                result = to_string(numb) + result;
            }
            break;
        }
        aux = numb % 16;
        numb = numb / 16;
        if(aux > 9){
            result = convertLetter(aux) + result;
        }else{
            result = to_string(aux) + result;
        }
    }
    return "0x" + result;
}


int hexToDec(string numb){
    int result = 0;
    int aux = 0;
    int cont = 0;
    for(int i = numb.size()-1; i >= 2; --i){
        int auxInt;
        if(toupper(numb[i]) == 'A'){
            auxInt = 10;
        }else if(toupper(numb[i]) == 'B'){
            auxInt = 11;
        }
        else if(toupper(numb[i]) == 'C'){
            auxInt = 12;
        }
        else if(toupper(numb[i]) == 'D'){
            auxInt = 13;
        }
        else if(toupper(numb[i]) == 'E'){
            auxInt = 14;
        }
        else if(toupper(numb[i]) == 'F'){
            auxInt = 15;
        }else{
            auxInt = numb[i] - '0';
        }
        aux = pow(16, cont);
        cont++;
        result = result + (aux * auxInt);
    }
    return result;
}



int main(){

    string numb;
    while(cin >> numb){
        if(stoi(numb) < 0) break;
        if(numb[1] == 'x'){
            cout << hexToDec(numb) << endl;
        }else{
            cout << decToHex(stoi(numb)) << endl;
        }  
    }
    return 0;
}