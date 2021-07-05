#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get first_number */
    int32_t first_number;
    std::cin >> first_number;

    /* get second_number */
    int32_t second_number;
    std::cin >> second_number;

    /* print appropriate message */
    if (first_number > second_number) {
        std::cout << (first_number - second_number) << std::endl;
    } else {
        std::cout << (first_number + second_number) << std::endl;
    }
    return 0;
}