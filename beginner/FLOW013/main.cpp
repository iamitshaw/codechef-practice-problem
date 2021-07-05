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
        /* get A */
        int32_t A;
        std::cin >> A;

        /* get B */
        int32_t B;
        std::cin >> B;

        /* get C */
        int32_t C;
        std::cin >> C;

        /* sum of angles should equals 180
         * degrees to be an valid triangle */
        if ((A + B + C) == 180) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}