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
        int a,b,c,d; cin >> a >> b >> c >> d;
        cout << (b * log10(a) < d * log10(c) ? "<" : ">") << endl;
    }







}
