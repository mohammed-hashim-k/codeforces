// https://codeforces.com/contest/1841/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }
        vector<int> res;

        int count = 0; // queries[j] > queries[j+1] count

        for (int i = 0; i < q; i++)
        {
            int new_count = count + (res.size() && res.back() > queries[i]);

            if (new_count == 0 || (new_count == 1 && queries[i] <= res[0]))
            {
                res.push_back(queries[i]);
                count = new_count; // count = 0 or 1
                cout << '1';
               
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
    }
}
