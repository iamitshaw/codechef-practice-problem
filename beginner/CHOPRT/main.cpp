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
        /* get A*/
        int32_t A;
        std::cin >> A;

        /* get B */
        int32_t B;
        std::cin >> B;

        if (A < B) {
            std::cout << "<" << std::endl;
        } else if (A > B) {
            std::cout << ">" << std::endl;
        } else {
            std::cout << "=" << std::endl;
        }
    }
    return 0;
}
