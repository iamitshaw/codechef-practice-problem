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
        /* get sides: [a, b, c, d] */
        int32_t a, b, c, d;
        std::cin >> a >> b >> c >> d;

        /* check whether specified sides are of rectangle */
        if (((a==b)&&(c==d)) or ((a==c)&&(b==d)) or ((a==d)&&(b==c))) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}