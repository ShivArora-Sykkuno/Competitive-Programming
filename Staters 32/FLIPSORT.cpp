#include <bits/stdc++.h>

signed main()
{
    int Test;
    std::cin >> Test;
    while (Test--)
    {
        int Num;
        std::cin >> Num;
        std::string Flip_string;
        std::cin >> Flip_string;
        std::vector<std::vector<int>> res;

        for (int i = Num - 1; i >= 0; i--)
        {
            if (Flip_string[i] == '0')
            {
                int temp = i + 1;
                for (int j = 0; j <= i; j++)
                {
                    if (Flip_string[j] == '1')
                        Flip_string[j] = '0';
                    else
                        Flip_string[j] = '1';
                }
                res.push_back({1ll, temp});
            }
        }
        int siz = res.size();
        std::cout << siz << std::endl;
        for (auto x : res)
            std::cout << x[0] << " " << x[1] << std::endl;
    }
    return 0;
}