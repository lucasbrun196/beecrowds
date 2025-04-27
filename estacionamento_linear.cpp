#include <iostream>
#include <stack>

using namespace std;

struct Car{
    int t1, t2;
};

stack<Car> st;

void cleanStack() { while(!st.empty()) st.pop(); }



int main(){

    int n, s, t1, t2, taux;
    bool flag;
    
    while(true){
        cin >> n >> s;
        if(n == 0 && s == 0) break;
        flag = false;
        while(n--){
            cin >> t1 >> t2;
            if(!flag){
                Car c;
                c.t1 = t1; c.t2 = t2;
                if(st.empty()){
                    taux = t2;
                    st.push(c);
                }else{
                    while(!st.empty() && c.t1 >= st.top().t2){
                        st.pop();
                        if(st.empty()) break;
                        if(st.top().t2 > taux) taux = st.top().t2;
                    }
                    if(st.empty()) taux = t2;
                    st.push(c);
                    if(st.size() > s || st.top().t2 > taux) flag = true;
                }
            }
        }
            
        if(flag) cout << "Nao\n";
        else cout << "Sim\n"; 
        cleanStack();
    }


    return 0;
}