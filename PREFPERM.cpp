#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        sort(arr, arr + k);
        vector<int> v1;
        int previous = 0;
        for (int j = 0; j < k; j++)
        {
            for (int x = arr[j]; x > previous; x--)
                v1.push_back(x);
            previous = arr[j];
        }
        for (auto iter = v1.begin(); iter != v1.end(); iter++)
            cout << *iter << " ";
        cout << endl;
    }
    return 0;
}