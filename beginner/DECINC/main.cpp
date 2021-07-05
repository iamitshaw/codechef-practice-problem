#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number */
    int32_t number;
    std::cin >> number;

    if (number % 4 == 0) {
        number += 1;
    } else {
        number -= 1;
    }
    /* print appropriate message */
    std::cout << number << std::endl;

    return 0;
}