
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
        string s;
        cin >> s;

        string ans = "";
        ans += s[0];

        int l = 0;
        int i = 1;
        while (i < n)
        {
            if (s[i] == s[l])
            {
                if (i + 1 < n)
                {
                    ans += s[i + 1];
                }
                l = i + 1;
                i = l + 1;
            }
            else{
                i++;
            }
            
        }
        cout << ans << '\n';
    }
}