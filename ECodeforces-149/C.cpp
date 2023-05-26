// https://codeforces.com/contest/1837/problem/C

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

        string s;
        cin >> s;

        char curr = '0';
        for (char &c : s)
        {
            if (c == '?')
            {
                c = curr;
            }
            else
            {
                curr = c;
            }
        }
        cout << s << '\n';
    }
}