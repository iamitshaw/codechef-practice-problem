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
        /* get number_of_races */
        int32_t number_of_races;
        std::cin >> number_of_races;

        /* get alice_finish_time for i-th race */
        std::vector<int32_t> alice_finish_time(number_of_races);
        for (int32_t i{0};i < number_of_races;i++) {
            std::cin >> alice_finish_time.at(i);
        }

        /* get bob_finish_time for i-th race */
        std::vector<int32_t> bob_finish_time(number_of_races);
        for (int32_t i{0};i < number_of_races;i++) {
            std::cin >> bob_finish_time.at(i);
        }

        /* evaluate winner */
        int32_t max_finish_of_alice{alice_finish_time.at(0)};
        int32_t max_finish_of_bob{bob_finish_time.at(0)};

        int32_t alice_total_time{alice_finish_time.at(0)};
        int32_t bob_total_time{bob_finish_time.at(0)};

        for (int32_t i{1};i < number_of_races;i++) {
            alice_total_time += alice_finish_time.at(i);
            bob_total_time += bob_finish_time.at(i);

            /* for maximum_finish_time_of_alice */
            if (alice_finish_time.at(i) > max_finish_of_alice) {
                max_finish_of_alice = alice_finish_time.at(i);
            }
            /* for maximum_finish_time_of_bob */
            if (bob_finish_time.at(i) >  max_finish_of_bob) {
                max_finish_of_bob = bob_finish_time.at(i);
            }
        }

        /* print appropriate message */
        alice_total_time -= max_finish_of_alice;
        bob_total_time -= max_finish_of_bob;

        if (alice_total_time > bob_total_time) {
            std::cout << "Bob\n";
        } else if (bob_total_time > alice_total_time) {
            std::cout << "Alice\n";
        } else {
            std::cout << "Draw\n";
        }
    }
    return 0;
}