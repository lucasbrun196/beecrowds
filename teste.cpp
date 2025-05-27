#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){

    int n, q1, T;

    cin >> n;
    stack<int> st;

    while(n--){
        cin << q1;
        if(q1 % 2 != 0)st.push(q1);
    }
    cin >> T;

    return 0;
}