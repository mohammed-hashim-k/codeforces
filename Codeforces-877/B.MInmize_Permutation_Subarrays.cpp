// https://codeforces.com/contest/1838/problem/B
#include <iostream>
using namespace std;
#define N 2000000

int index[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            int x;cin >> x;
            index[x] = i;
        }

        if (index[n] < min(index[1], index[2]))
        {
            cout << index[n] << " " << min(index[1], index[2]) << "\n";
        }
        else if (index[n] > max(index[1], index[2]))
        {
            cout << index[n] << " " << max(index[1], index[2]) << "\n";
        }
        else
        {
            cout << index[1] << " " << index[2] << "\n";
        }
        return 0;
    }
}