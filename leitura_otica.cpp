#include <iostream>
#include <list>
#include <queue>

using namespace std;



int main(){
    while (true){
        int n;
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; ++i){
            list<int> values_list;
            for(int j = 0; j < 5; ++j){
                int value;
                cin >> value;
                values_list.push_back(value);
            }
            int cont = 1;
            queue<int> mq;
            for(auto it = values_list.begin(); it != values_list.end(); ++it){
                if(*it <= 127){
                    mq.push(cont);
                }
                cont++;
            }
            if(mq.size() > 1 || mq.size() == 0){
                cout << "*";
            }else if(mq.front() == 1 && mq.size() == 1){
                cout << "A";
            }else if(mq.front() == 2 && mq.size() == 1){
                cout << "B";
            }else if(mq.front() == 3 && mq.size() == 1){
                cout << "C";
            }else if(mq.front() == 4 && mq.size() == 1){
                cout << "D";
            }else if(mq.front() == 5 && mq.size() == 1){
                cout << "E";
            }
            cout << endl;
        }
    }
    

    return 0;
}