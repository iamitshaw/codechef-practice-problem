#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_value */
    int32_t number;
    while (std::cin >> number && number != 42) {
        /* if number_value isn't 42 */
        std::cout << number << std::endl;
    }
    return 0;
}