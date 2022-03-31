#include <bits/stdc++.h>
#define ll long long int

int main()
{
    int Test;
    std::cin >> Test;
    while (Test--)
    {
        int Num, K;
        std::cin >> Num >> K;
        std::vector<int> Vec(Num);
        for (int i = 0; i < Num; i++)
            std::cin >> Vec[i];
        sort(Vec.begin(), Vec.end());

        std::cout << (Vec[std::min(K, Num - 1)]) << std::endl;
    }
    return 0;
}