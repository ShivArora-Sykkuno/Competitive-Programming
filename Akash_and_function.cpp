#include <bits/stdc++.h>
#define int long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n++;
        cout << (n >> 1) << endl;
    }
    return 0;
}