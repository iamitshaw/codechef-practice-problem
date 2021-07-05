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
        /* get length_of_sequence */
        int32_t N;
        std::cin >> N;

        /* get sequence elements */
        std::vector<int32_t> A(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> A.at(i);
        }
        /* get length_of_sub_sequence */
        int32_t M;
        std::cin >> M;

        /* get sub-sequence elements */
        std::vector<int32_t> B(M);
        for (int32_t i{0};i < M;i++) {
            std::cin >> B.at(i);
        }

        /* evaluate existence of sub-sequence */
        int32_t i{0}, j{0};
        while (i < N && j < M) {
            if (A.at(i) == B.at(j)) {
                j += 1;
            }
            i += 1;
        }

        /* print appropriate message */
        std::cout << (j == M? "Yes\n": "No\n");
    }
    return 0;
}