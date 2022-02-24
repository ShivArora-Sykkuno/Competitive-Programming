#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        string rev_st = st;
        reverse(all(st));
        int X = rev_st.length();
        int arr[256];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < X; i++)
            arr[rev_st[i]]++;
        for (int i = 0; i < X; i++)
            arr[st[i]]--;
        int res = 0;
        for (int i = X - 1, j = X - 1; i >= 0;)
        {
            while (i >= 0 && st[i] != rev_st[j])
            {
                i--;
                res++;
            }
            if (i >= 0)
            {
                i--;
                j--;
            }
        }
        cout << res << "\n";
    }
}