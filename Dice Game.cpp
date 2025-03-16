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

int mem[6][(int)1e5];
vector<vector<int>> dice;
int solve(int current_face, int n) {

    if(n == 0) return 0;
    if(n < 0) return -1;

    if(mem[current_face - 1][n] != -1) return mem[current_face - 1][n];

    int &ans = mem[current_face - 1][n];
    for(auto face : dice[current_face]) {
        int tryy = solve(face, n - face);
        if(tryy != -1) {
            if(ans == -1) ans = 1 + tryy;
            else ans = min(ans, 1 + tryy);
        }
    }

    return ans;
}

signed main() {

    file();
    fastio();

    // precompute
    dice.assign(8, vector<int>());
    for(int i = 1; i<=6; i++) {
        for(int j = 1; j <= 6; j++) {
            if(j != 6-i+1 && j != i) dice[i].push_back(j);
        }
    }

//    for(int i = 1; i<=6; i++) {
//        for(auto faces : dice[i]) cout << faces << ' ';
//        cout << endl;
//    }
    memset(mem, -1, sizeof mem);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << solve(1, n) << endl;
    }







}
