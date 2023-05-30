//https : // codeforces.com/contest/1831/problem/A

#include<iostream>
#include<vector>
#include<algorithm>


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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        for (int num: a)
            cout << n+1-num << " ";

        cout << "\n";
    }
}