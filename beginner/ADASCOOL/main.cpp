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
        /* get N */
        int32_t N;
        std::cin >> N;

        /* get M */
        int32_t M;
        std::cin >> M;

        /* print appropriate message */
        if ((N % 2 != 0) && (M % 2 != 0)) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
    return 0;
}