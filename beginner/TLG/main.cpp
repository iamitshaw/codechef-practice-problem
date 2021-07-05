#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get total_round in game */
    int32_t total_round;
    std::cin >> total_round;

    /* first_score & second_score signifies scores
     * earned by player_01 & player_02 respectively */
    int32_t first_score{0}, second_score{0};

    /* cumulative score of first_player & second_player */
    int32_t first_cumulative{0}, second_cumulative{0};

    enum Winner {player_01, player_02};
    int32_t maximum_lead{0};Winner winner;

    while (total_round--) {

        /* get first_score & second_score */
        std::cin >> first_score;
        std::cin >> second_score;

        /* evaluate cumulative_score of first
         * player & second_player respectively */
        first_cumulative += first_score;
        second_cumulative += second_score;

        /* get current lead value */
        int32_t difference_of_score=first_cumulative-second_cumulative;
        int32_t current_lead={std::abs(difference_of_score)};

        /* if current_lead is greater than max_lead */
        if (current_lead > maximum_lead) {
            maximum_lead = current_lead;

            /* choose winner until processed round
             * between player_01 and player_02 */
            if (first_cumulative > second_cumulative) {
                winner = player_01;
            } else {
                winner = player_02;
            }
        }
    }

    /* print winner & maximum_lead */
    std::cout << (winner + 1) << " " ;
    std::cout << maximum_lead << std::endl;

    return 0;
}