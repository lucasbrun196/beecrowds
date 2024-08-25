#include <iostream>

using namespace std;

string decodeString(string word){
    
    string decod = "";
    for(int i = (word.size() / 2) -1; i >= 0; --i){
        decod += word[i];
    }

    for(int i = word.size()-1; i >= (word.size() / 2); --i){
        decod += word[i];
    }
    return decod;
}

int main(){

    int cases;
    string revertWord;
    cin >> cases;
    cin.ignore();
    while (cases--) {
        getline(cin, revertWord);
        cout << decodeString(revertWord) << endl;
    }
    

    return 0;
}