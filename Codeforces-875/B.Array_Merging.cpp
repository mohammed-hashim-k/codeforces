// https://codeforces.com/contest/1831/problem/B
#include <iostream>
#include <vector>
#include <algorithm>

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

using namespace std;

const int N = 1e5 + 228;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        vector<int> max_sub_a(n + n + 1), max_sub_b(n + n + 1);
        int curr = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[i - 1])
            {
                max_sub_a[a[i - 1]] = max(max_sub_a[a[i - 1]], i - curr); // maximum subarray containing the a[i-1] element
                curr = i;                                                 // start of the new subarray
            }
        }
        max_sub_a[a[n]] = max(max_sub_a[a[n]], n + 1 - curr); // last element

        curr = 1;
        for (int i = 2; i <= n; i++)
        {
            if (b[i] != b[i - 1])
            {
                max_sub_b[b[i - 1]] = max(max_sub_b[b[i - 1]], i - curr); // maximum subarray containing the b[i-1] element
                curr = i;                                                 // start of the new subarray
            }
        }
        max_sub_b[b[n]] = max(max_sub_b[b[n]], n + 1 - curr); // last element

        int ans = 0;
        for (int i = 1; i <= n + n; i++)
        {
            ans = max(ans, max_sub_a[i] + max_sub_b[i]); // maximum subarray containing the i element that we can force form to a big
                                                         // subarray by merging two subarrays
        }
        cout << ans << '\n';
    }
}