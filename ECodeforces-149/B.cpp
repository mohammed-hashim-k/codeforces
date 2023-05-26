// https://codeforces.com/contest/1837/problem/B

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

        int n;
        cin >> n;

        string s;
        cin >> s;

        int maxLen = 1; // Maximum length of consecutive subarray
        int curLen = 1; // Current length of consecutive subarray

        // Iterate through the string and update the lengths
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                curLen++;
            }
            else
            {
                maxLen = max(maxLen, curLen);
                curLen = 1;
            }
        }

        // Check if the last subarray is longer than the previous maximum
        maxLen = max(maxLen, curLen);

        cout << maxLen + 1 << endl;
    }
}