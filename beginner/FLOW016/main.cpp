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
        int64_t A;
        std::cin >> A;

        /* get B */
        int64_t B;
        std::cin >> B;

        /* find out gcd & lcm */
        int64_t gcd_value{std::__gcd(A, B)};
        int64_t lcm_value{(A * B)/gcd_value};

        /* print appropriate message */
        std::cout << gcd_value << " " ;
        std::cout << lcm_value << std::endl;
    }
    return 0;
}