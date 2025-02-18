#include <iostream>
#include <stack>
#include <queue>


using namespace std;

int main(){
    int n;
    char cn;
    string ans;
    
    while(true){
        stack<char> est;
        queue<char> in, out;
        cin >> n;
        if(n == 0) break;
        ans = "";
        for(int i = 0; i < n; i++){
            cin >> cn;
            in.push(cn);
        }
        for(int i = 0; i < n; i++){
            cin >> cn;
            out.push(cn);
        }

        while(true){
            if(!est.empty() && est.top() == out.front()){
                ans += 'R';
                est.pop();
                out.pop();
            }else if(!in.empty()){
                ans += 'I';
                est.push(in.front());
                in.pop();
            }else{
                if(!est.empty()) ans+= " Impossible";
                break;
            }
        }
        cout << ans << endl;
    }


    return 0;
}