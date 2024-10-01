#include <iostream>
#include <vector>

using namespace std;


int countConnections(vector<vector<string> > &matConnection, vector<string> &appVec){
    int cont = 0;
    vector<int> vecIndexVisited;
    bool isVisited;
    for(int i = 0; i < appVec.size(); ++i){
        for(int j = 0; j < matConnection.size(); ++j){
            isVisited = false;
            for(int const indexV: vecIndexVisited){
                if(j == indexV){
                    isVisited = true;
                    break;
                }
            }
            if(isVisited == false){
                for(int w = 0; w < matConnection[j].size(); ++w){
                    if(appVec[i] == matConnection[j][w]){
                        vecIndexVisited.push_back(j);
                        cont++;
                        break;
                    }
                }
            }
        }
    }
    
    return cont;
}

int main(){

    int n, m, tot, servers, applications;
    vector<string> vs, vsApp;
    vector<vector<string> > vv;
    vector<int> visited;
    string server_name, application_name;

    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        tot = 0;
        while(n--){
            cin >> servers;
            while(servers--){
                cin >> server_name;
                vs.push_back(server_name);
            }
            vv.push_back(vs);
            vs.clear();
        }
        while(m--){
            cin >> applications;
            while (applications--){
                cin >> server_name;
                vsApp.push_back(server_name);
            }
            tot += countConnections(vv, vsApp);
            vsApp.clear();
            
        }
        cout << tot << endl;
        vv.clear();
    }

    return 0;
}
