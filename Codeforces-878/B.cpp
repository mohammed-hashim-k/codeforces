#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long  n, k;
        cin >> n >> k;
        if (k >= 32)
        {
            cout << n + 1 << '\n';
        }
        else
        {
            long long  a = pow(2, k);
            cout << min(n + 1,a ) << '\n';
        }
    }

    return 0;
}
