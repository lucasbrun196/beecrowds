#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct G {
    string n;
    int p, dmt, dmr;
};

bool compare(G &g1, G &g2){
    return
        (g1.p > g2.p) ||
        (g1.p == g2.p && g1.dmt > g2.dmt) ||
        (g1.p == g2.p && g1.dmt == g2.dmt && g1.dmr < g2.dmr) ||
        (g1.p == g2.p && g1.dmt == g2.dmt && g1.dmr == g2.dmr && g1.n < g2.n);
}

int main(){

    int c, p, dmt, dmr;
    string n;
    vector<G> vg;
    cin >> c;
    while(c--){
        cin >> n >> p >> dmt >> dmr;
        G g;
        g.n = n; g.p = p; g.dmt = dmt; g.dmr = dmr;
        vg.push_back(g);
    }
    sort(vg.begin(), vg.end(), compare);
    cout << vg.front().n << endl;

    return 0;
}
