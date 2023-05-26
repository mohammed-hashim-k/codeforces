// https://codeforces.com/contest/1837/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        long long right_duration = 1000000000000000, left_duration = 0;
        while (right_duration - left_duration > 1)
        {
            long long mid_duration = (right_duration + left_duration) / 2;
            vector<int> L(n + 1, 0);
            priority_queue<int> pq1;
            long long sum1 = 0;
            for (int j = 0; j < n; j++)
            {
                pq1.push(a[j]);
                sum1 += a[j];
                if (sum1 > mid_duration)
                { // if sum1 > mid_duration, we need to remove the largest element from the priority queue
                    sum1 -= pq1.top();
                    pq1.pop();
                }
                L[j + 1] = pq1.size(); // L[j+1] is the number of elements in the priority queue
            }
            vector<int> R(n + 1, 0);
            priority_queue<int> pq2;
            long long sum2 = 0;
            for (int j = n - 1; j >= 0; j--)
            {
                pq2.push(a[j]);
                sum2 += a[j];
                if (sum2 > mid_duration)
                {
                    sum2 -= pq2.top();
                    pq2.pop();
                }
                R[j] = pq2.size();
            }
            bool ok = false;
            for (int j = 0; j <= n; j++)
            {
                if (L[j] + R[j] >= k) // more than k elements in total so we can make a valid partition
                    ok = true;
            }
            if (ok)
                right_duration = mid_duration; // try for a smaller duration
            else
                left_duration = mid_duration; // try for a larger duration
        }
        cout << right_duration << endl;
    }
}