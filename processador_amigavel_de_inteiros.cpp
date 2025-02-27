#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string line, ansString;
    int endOfZero;
    bool isOverflow;
    long long ans;
    while(getline(cin, line)){
        ansString = "";
        isOverflow = false;
        for(char c : line){
            if(c == 'O' || c == 'o') ansString.push_back('0');
            else if(c == 'l') ansString.push_back('1');
            else if(c == ' ' || c == ',') continue;
            else if(!isdigit(c)){
                isOverflow = true;
                break;
            }else{
                ansString.push_back(c);
            } 
        }
        if(isOverflow || ansString.size() == 0) cout << "error\n";
        else{
            ansString.erase(0, ansString.find_first_not_of('0'));
            if(ansString.size() > 10) cout << "error\n";
            else if(ansString.size() == 0) cout << "0\n";
            else if(stoll(ansString) > 2147483647)cout << "error\n";
            else{
                ans = stoll(ansString);
                cout << ans << endl;
            } 
            

            
            
        }
    }

    return 0;
}