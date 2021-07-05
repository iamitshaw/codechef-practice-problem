#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {
        /* get first_guard_count */
        int32_t first_guard_count;
        std::cin >> first_guard_count;

        /* get second_guard_count */
        int32_t second_guard_count;
        std::cin >> second_guard_count;

        /* minimum number of entry */
        if (first_guard_count > second_guard_count) {
            std::cout << first_guard_count << " ";
        } else {
            std::cout << second_guard_count << " ";
        }

        /* maximum number of entry */
        std::cout << (first_guard_count + second_guard_count) << std::endl;
    }
    return 0;
}