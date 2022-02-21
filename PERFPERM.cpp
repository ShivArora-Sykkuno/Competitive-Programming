#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1;
    for (int i = 1; i <= n; i++)
        v1.push_back(i);
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (k == n - 1)
    {
        swap(v1[0], v1[1]);
        for (auto x : v1)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    int count = 0;
    k = n - k;
    while (k--)
    {
        swap(v1[count], v1[count + 1]);
        count++;
    }
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}