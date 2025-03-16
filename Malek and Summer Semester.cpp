#include <bits/stdc++.h>
#define iinf INT_MAX
#define linf LONG_LONG_MAX
#define endl '\n'
using namespace std;

void fastio(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
void file() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

#define int long long
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second

signed main() {

    file();
    fastio();

    int t; cin >> t;
    while(t--) {
        double m; int n; cin >> n >> m;
        int to_succeed = ceil((double)n * m);
        int s = 0;
        for(int i = 0; i<n; i++) {
            int x; cin >> x;
            if(x >= 50) s++;
        }
        if(s >= to_succeed) cout << "YES" << endl; else cout << "NO" << endl;
    }







}
