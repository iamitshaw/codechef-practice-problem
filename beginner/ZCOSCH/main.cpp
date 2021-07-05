#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get ranking */
    int32_t ranking;
    std::cin >> ranking;

    /* evaluate percentage_scholarship */
    int32_t percentage_scholarship{0};
    if (ranking >= 1 && ranking <= 50) {
        percentage_scholarship = 100;
    } else if (ranking >= 51 && ranking <= 100) {
        percentage_scholarship = 50;
    }

    /* print appropriate message */
    std::cout << percentage_scholarship << std::endl;

    return 0;
}