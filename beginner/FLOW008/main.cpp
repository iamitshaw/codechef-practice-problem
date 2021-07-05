#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get number */
        int32_t number;
        std::cin >> number;

        /* print appropriate message */
        if (number < 10) {
            std::cout << "Thanks for helping Chef!" << std::endl;
        } else {
            std::cout << "-1" << std::endl;
        }
    }
    return 0;
}