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
        int n; cin >> n;
        int x = 0,y = 0,z = 0;
        for(int i = 0; i<n; i++) {
            string s; cin >> s;
            if(s.find("bed") == 0) z++;
            else if(s.find("kitchen") == 0) y++;
            else if(s.find("living") == 0) x++;
        }
        cout << min({x, y, z / 2}) << endl;
    }







}
