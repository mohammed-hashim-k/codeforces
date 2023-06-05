
https : // codeforces.com/contest/1838/problem/A
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
        vector<int> a(n);
        // input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort the array
        sort(all(a));
        if (a[0]<0){
            cout<<a[0]<<endl;
        }
        else{
            cout<<a[n-1]<<endl;
        }
    }
}