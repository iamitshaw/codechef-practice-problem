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
        /* get A */
        int32_t A;
        std::cin >> A;

        /* get B */
        int32_t B;
        std::cin >> B;

        /* get C */
        int32_t C;
        std::cin >> C;

        int32_t second_minimum;

        if (A > B) {
            if (B > C) {
                second_minimum = B;
            } else if (C > A) {
                second_minimum = A;
            } else {
                second_minimum = C;
            }
        } else {
            if (A > C) {
                second_minimum = A;
            } else if (B > C) {
                second_minimum = C;
            } else {
                second_minimum = B;
            }
        }

        /* print appropriate message */
        std::cout << second_minimum << std::endl;
    }
    return 0;
}