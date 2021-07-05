#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get N */
    int32_t N;
    std::cin >> N;

    /* print appropriate message */
    if (N >= 0 && N <= 9) {
        /* if N is a single digit number */
        std::cout << "1\n";
    } else if (N >= 10 && N <= 99) {
        /* if N is a two digit number */
        std::cout << "2\n";
    } else if (N >= 100 && N <= 999) {
        /* if N is a three digit number */
        std::cout << "3\n";
    } else {
        /* if N has more than 3 digits */
        std::cout << "More than 3 digits\n";
    }
    return 0;
}