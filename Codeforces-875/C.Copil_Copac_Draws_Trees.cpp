// https : // codeforces.com/contest/1831/problem/C

#include <iostream>
#include <vector>
#include <algorithm>

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

using namespace std;

const int N = 2e5 + 5;

int dp[N], id[N];
vector<pair<int, int>> edge[N];

void dfs(int u)
{
    for (auto it : edge[u])
    {
        int v = it.first;
        int order = it.second;
        if (dp[v] == 0)
        {                                     // if dp[v] == 0 then we haven't visited v yet
            dp[v] = dp[u] + (order <= id[u]); // if order <= dp[u] then we increase dp[v] by 1 else dp[v] = dp[u]
            id[v] = order;                    // id[v] is the order of edge that connect u and v
            dfs(v);                           // continue dfs
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            edge[i].clear();
            dp[i] = 0;
            id[i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            edge[u].push_back({v, i}); // order of edge is i
            edge[v].push_back({u, i});
        }
        dp[1] = 1; // root
        dfs(1);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {

            ans = max(ans, dp[i]);
        }

        cout << ans << '\n';
    }
}