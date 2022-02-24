#include <vector>
#include <iostream>

int main()
{
    while (true)
    {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> dp(n + 1);
        dp[1] = 0;
        for (size_t i = 2; i <= n; i++)
            dp[i] = (k + dp[i - 1]) % i;
        std::cout << dp[n] + 1 << std::endl;
    }
}