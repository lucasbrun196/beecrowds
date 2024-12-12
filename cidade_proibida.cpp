#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

#define INF 0x3f3f3f3f


typedef pair<int, int> pii;
typedef vector<pii> vpii;

map<int, vpii> g;
map<int, int> d;

void dijkstra(int src, int dest, int fCity){
    for(auto p : g) d[p.first] = INF;
    priority_queue<pii, vpii, greater<pii> > pq;
    d[src] = 0;
    pq.push(make_pair(d[src], src));
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for(auto p: g[u]){
            if((d[p.first] > d[u] + 1) && (p.first != fCity)){
                d[p.first] = d[u] + 1;
                pq.push(make_pair(d[p.first], p.first));
            }
        }
    }
    cout << d[dest] << endl;
}


int main(){

    int n, m, c, r, e, a, b;
    while (cin >> n >> m){
        for(int i = 0; i < m; ++i){
            cin >> a >> b;
            g[a].push_back(make_pair(b, INF));
            g[b].push_back(make_pair(a, INF));
        }
        cin >> c >> r >> e;
        dijkstra(c, r, e);
        d.clear();
        g.clear();
    }
    


    return 0;
}