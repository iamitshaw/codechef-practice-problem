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
        /* get string */
        std::string points;
        std::cin >> points;

        /* determine either first_player
         * or second_player is winner */
        int32_t points_I{0};int32_t points_II{0};
        bool winner_I{false}, winner_II{false};

        for (auto it{points.begin()};it != points.end();it++) {

            *it == '1'? points_I += 1: points_II += 1;

            if (points_I >= 11 && points_II < points_I) {
                /* if first_player is winner */
                winner_I = {true};break;
            } else if (points_II >= 11 && points_I < points_II) {
                /* if second_player is winner */
                winner_II = {true};break;
            } else if (points_I == 10 && points_II == 10) {
                it++;
                while (it != points.end()) {
                    *it == '1'? points_I += 1: points_II += 1;

                    if (points_I - points_II >= 2) {
                        /* if first_player is winner */
                        winner_I = {true};break;
                    } else if (points_II - points_I >= 2) {
                        /* if second_player is winner */
                        winner_II = {true};break;
                    } else {
                        it++;
                    }
                }

                /* no further processing is required
                 * as no winner can be determined */
                break;
            }
        }

        /* print appropriate message */
        std::cout << (winner_I? "WIN\n": "LOSE\n");
    }
    return 0;
}