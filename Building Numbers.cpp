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


int solve(int n) { // O(logN)
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(n%2 == 0) return 1 + solve(n/2);
    else return 2 + solve(n/2);
}

signed main() {

    file();
    fastio();

    int t; cin >> t;
    while(t--) {

        int n,q; cin >> n >> q;
        vector<int>v(n); for(auto &x : v) cin >> x;
        vector<int> pre(n, 0);
        for(int i = 0; i<n; i++) {
            pre[i] = solve(v[i]);
            if(i > 0) pre[i] += pre[i-1];
        }
        while(q--) {
            int l,r; cin >> l >> r;
            l--, r--;
            int ans = pre[r] - (l == 0 ? 0 : pre[l-1]);
            cout << ans << endl;
        }
    }







}
