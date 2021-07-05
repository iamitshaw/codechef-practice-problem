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
        /* get max_candy_by_limak */
        int32_t max_candy_by_limak;
        std::cin >> max_candy_by_limak;

        /* get max_candy_by_bob */
        int32_t max_candy_by_bob;
        std::cin >> max_candy_by_bob;

        /* determine winner */
        bool is_winner_limak;int32_t candy{1};
        while (true) {
            /* candy eaten by A */
            if (max_candy_by_limak - candy >= 0) {
                max_candy_by_limak -= candy;candy += 1;
            } else {
                is_winner_limak = {false};break;
            }

            /* candy eaten by B */
            if (max_candy_by_bob - candy >= 0) {
                max_candy_by_bob -= candy;candy += 1;
            } else {
                is_winner_limak = {true};break;
            }
        }

        /* print appropriate message */
        std::cout << (is_winner_limak ? "Limak\n" : "Bob\n");
    }
    return 0;
}