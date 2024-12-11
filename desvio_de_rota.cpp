#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <map>

using namespace std;

#define INF 0X3F3F3F3F

typedef pair<int, int> pii;
typedef vector<pii> vpii;

map<int, vpii> g;
map<int, int> d;

int dijkstra(const int src, const int dest, const int serviceRoute){
    for(auto p:g) d[p.first] = INF;
    priority_queue<pii, vpii, greater<pii> > pq;
    d[src] = 0;
    pq.push(make_pair(0, src));
    int cont = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        for(auto p : g[u]){
            if(d[p.first] > p.second + d[u]){
                d[p.first] = p.second + d[u];
                pq.push(make_pair(d[p.first], p.first));
            }
        }
    }
    return d[dest];
}

int main(){

    int n, m, c, k, u, v, p;

    while (true){
        cin >> n >> m >> c >> k;
        if(n == 0 && m == 0 && c == 0 && k == 0) break;

        for(int i = 0; i < m; ++i){
            cin >> u >> v >> p;

            if(u >= c && v >= c){
                g[u].push_back(make_pair(v, p));
                g[v].push_back(make_pair(u, p));
            }

            if(u>=c && v < c){
                g[u].push_back(make_pair(v, p));
            }

            if(u<c && v>=c) g[v].push_back(make_pair(u, p));
            if(u<c && v<c && abs(u-v)==1){
                g[u].push_back(make_pair(v, p));
                g[v].push_back(make_pair(u, p));
            }

        }

        int ans = dijkstra(k, c-1, c);
        cout << ans << endl;
        g.clear();
        d.clear();
    }
    

    return 0;
}





