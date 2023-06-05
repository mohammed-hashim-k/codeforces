
// https://codeforces.com/contest/1839/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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
        vector<int> lamps[n];
        for (int i = 0; i < n; i++)
        {
            long long a, b;
            cin >> a >> b;
            lamps[a - 1].push_back(b); // store all the points for a 'a'
        }
        long long ans = 0;
        // select larger prices for lamps
        // begin from the least a and select the largest b
        for (int i = 0; i < n; i++)
        {
            sort(lamps[i].begin(), lamps[i].end(), greater<int>());    // sort the points in descending order
            for (int j = 0; j < min(i + 1, (int)lamps[i].size()); j++) //  we can select at most i+1 lamps for a given a or we can select at most lamps[i].size() lamps for a given a
            {
                ans += lamps[i][j]; // add the price of the lamp
            }
        }
        cout << ans << endl;
    }
}