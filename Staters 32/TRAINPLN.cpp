#include <bits/stdc++.h>
#define ll long long int

signed main()
{
    int Test;
    std::cin >> Test;
    while (Test--)
    {
        ll n;
        std::cin >> n;
        std::vector<ll> arr1(n);
        for (ll i = 0; i < n; i++)
            std::cin >> arr1[i];
        std::vector<ll> arr2(n);
        for (ll i = 0; i < n; i++)
        {
            std::cin >> arr2[i];
        }
        std::vector<std::vector<long long>> Empty_Slots(n);
        for (ll i = 0; i < n; i++)
        {
            Empty_Slots[arr2[i]].push_back(arr1[i]);
        }
        std::vector<double> DP(n + 1, 0);
        std::multiset<ll> temp_arr;
        for (long long i = 1; i < n + 1; i++)
        {
            for (auto &j : Empty_Slots[i - 1])
                temp_arr.insert(j);
            if (temp_arr.size())
            {
                DP[i] = DP[i - 1];
                auto iterator = temp_arr.end();
                ;
                iterator--;
                DP[i] += *iterator;
                temp_arr.erase(iterator);
            }
            else
                break;
        }
        for (ll i = 1; i < n + 1; i++)
            DP[i] /= i;
        double ans = *max_element(DP.begin(), DP.end());
        std::cout << std::fixed << std::setprecision(6) << ans << std::endl;
    }
    return 0;
}