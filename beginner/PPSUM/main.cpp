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
        /* get D */
        int32_t D;
        std::cin >> D;

        /* get N */
        int32_t N;
        std::cin >> N;

        for (int32_t i{1};i <= D;i++) {
            /* find out sum_of_first_n natural numbers */
            int32_t sum_of_first_n {(N * (N + 1))/2};
            N = sum_of_first_n;
        }

        /* print appropriate message */
        std::cout << N << std::endl;
    }
    return 0;
}