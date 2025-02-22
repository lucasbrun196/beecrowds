#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <set>

using namespace std;

map<char, string> mp;

bool dfs(char src, char dest){
    set<char> visited;
    stack<char> sc;
    sc.push(src);
    visited.insert(src);
    while(!sc.empty()){
        char n = sc.top();
        sc.pop();
        if(n == dest) return true;
        for(char c: mp[n]){
            if(visited.count(c) == 0){
                visited.insert(c);
                sc.push(c);
            }
        }
    }
    return false;
}

int main(){

    int n, m;
    char a, b;
    bool isVerified;
    string word1, word2;

    cin >> n >> m;
    while(n--){
        cin >> a >> b;
        mp[a].push_back(b);
    }

    while(m--){
        cin >> word1 >> word2;
        if(word1.size() == word2.size()){
            isVerified = true;
            for(int i = 0; i < word1.size(); i++) if(!dfs(word1[i], word2[i])) isVerified = false;
            if(isVerified) cout << "yes\n";
            else cout << "no\n";
        }else cout << "no\n";
    }

    return 0;
}