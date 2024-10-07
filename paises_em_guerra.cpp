#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <queue>

using namespace std;

#define INF 0x3F3F3F3F


map<int, int> dist; 
map<int, vector<pair<int, int> > >  graph;

bool sameCountry(int source, int destination){
    for(int i = 0; i < graph[destination].size(); ++i){
        if(graph[destination][i].first == source){
            graph[destination][i] = make_pair(source, 0);
            return true;
        }
    }
    return false;
}

int dijkstra(int source, int destination){
    for(auto w: graph){
        dist[w.first] = INF;
    }
    dist[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push(make_pair(dist[source], source));
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for(auto pair : graph[u]){
            if(pair.second + dist[u] < dist[pair.first]){
                dist[pair.first] = pair.second + dist[u];
                pq.push(make_pair(dist[pair.first], pair.first));
            }
        }
    }
    return dist[destination];
}

int main(){
    
    int N, E, X, Y, H, K, O, D;

    while(true){
        cin >> N >> E;
        if(N == 0 && E == 0) break;

        for(int i = 0; i < N; ++i){
            graph[i+1];
        }

        for(int i = 0; i < E; ++i){
            cin >> X >> Y >> H;
            if(sameCountry(X, Y)){
                graph[X].push_back(make_pair(Y, 0));
            }else{
                graph[X].push_back(make_pair(Y, H));
            }
        }
        cin >> K;
        for(int i = 0; i < K; ++i){
            cin >> O >> D;
            int res = dijkstra(O, D);
            if(res == INF){
                cout << "Nao e possivel entregar a carta\n";
            }else{
                cout << res << endl;
            }
            dist.clear();
        }
        cout << endl;
        graph.clear();
    }

    return 0;
}