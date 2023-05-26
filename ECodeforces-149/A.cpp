// https://codeforces.com/contest/1837/problem/A

#include <bits/stdc++.h>

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

using namespace std;

const int N = 1e5 + 228;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        int x, k;
        cin >> x >> k;
        if (x % k == 0)
        {
            cout << 2 << '\n';
            cout << x - 1 << ' ' << 1 << '\n';
        }
        else
        {
            cout << 1 << '\n';
            cout << x << '\n';
        }
    }
}