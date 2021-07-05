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
        /* get size_of_chess_board */
        int32_t N;
        std::cin >> N;

        /* evaluate total_odd_squares */
        int32_t i{1};int64_t total_odd_squares{0};
        while (i <= N) {
            total_odd_squares += (N-i+1) * (N-i+1);
            i += 2;
        }

        /* print appropriate message */
        std::cout << total_odd_squares << std::endl;
    }
    return 0;
}