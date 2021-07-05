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
        /* get number_of_problems */
        int32_t N;std::cin >> N;

        /* get break_time */
        int32_t B;std::cin >> B;

        /* get initial_time_to_solve_problem */
        int32_t M;std::cin >> M;

        int64_t time_to_solve{M};
        int64_t total_time_required{0};
        while (true) {
            if (N % 2 == 0) {
                total_time_required += (N/2) * time_to_solve;
                N -= (N/2);
            } else {
                total_time_required += ((N+1)/2) * time_to_solve;
                N -= (N + 1)/2;
            }

            if (N <= 0) {
                /* if problems has been solved */
                break;
            } else {
                total_time_required += B;
                time_to_solve *= 2;
            }
        }

        /* print appropriate message */
        std::cout << total_time_required << std::endl;
    }
    return 0;
}