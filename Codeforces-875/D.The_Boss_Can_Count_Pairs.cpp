// https://codeforces.com/contest/1831/problem/D

// https : // codeforces.com/contest/1831/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

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

        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        // make pair
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++)
            p[i] = {a[i], b[i]};

        // sort
        sort(all(p));
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (p[i].first * p[j].first <= 2 * n)
                {
                    if ( p[i].first * p[j].first == p[i].second + p[j].second)
                        count++;
                }
                else{
                    break;
                }
            }

        }
        cout << count << '\n';
    }
}