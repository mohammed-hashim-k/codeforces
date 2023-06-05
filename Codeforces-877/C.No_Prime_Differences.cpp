// https://codeforces.com/contest/1838/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc)
    {

        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (i % 2 == 0)
                    cout << (n / 2 + i / 2) * m + j + 1 << ' ';  // 15 16 17 18 19 20
                else
                    cout << (i / 2) * m + j + 1 << ' ';          // 1 2 3 4 5 6
            }
            cout << '\n';
        }
    }
}