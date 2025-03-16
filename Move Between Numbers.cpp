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

//#define int long long
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second

#define N 260
int mem[N];
int common[N][N];
int n,s,e;

int bfs() {
    vector<int> dist(n, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == e) {
            return dist[u];
        }

        for (int v = 0; v < n; ++v) {
            if (common[u][v] == 17 && dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    return -1;
}

signed main() {

    file();
    fastio();

    int t; cin >> t;
    while(t--) {
        memset(mem, -1, sizeof mem);

        cin >> n >> s >> e;
        s--, e--;
        vector<string>strs(n);
        for(auto &x : strs) cin >> x;

        vector<vector<int>>cnt(n, vector<int>(30, 0));
        for(int i = 0; i<n; i++) {
            for(char c : strs[i]) {
                cnt[i][c-'0']++;
            }
        }

        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                int sum = 0;
                for(char c = '0'; c<='9'; c++) {
                    sum += min(cnt[i][c-'0'], cnt[j][c-'0']);
                }
                common[i][j] = common[j][i] = sum;
            }
        }

//        for(int i = 0; i<n; i++) {
//            for(int j = 0; j<n; j++) {
//                cout << common[i][j] << ' ';
//            } cout << endl;
//        }


        cout << bfs() << endl;



    }









}
