#include <bits/stdc++.h>

int64_t find_dist(std::pair<int32_t , int32_t>& first, std::pair<int32_t , int32_t>& second) {
    /* determine both terms of distance formula */
    int64_t first_term{(first.first - second.first)*(first.first - second.first)};
    int64_t second_term{(first.second - second.second)*(first.second - second.second)};

    return first_term + second_term;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get direct_range */
        int32_t direct_range;
        std::cin >> direct_range;

        /* get different transceiver locations */
        std::vector<std::pair<int32_t , int32_t>> transceivers(3);
        for (int32_t i{0}; i < transceivers.size(); i++) {
            std::cin >> transceivers.at(i).first;
            std::cin >> transceivers.at(i).second;
        }

        std::vector<int64_t> distance(3);

        /* evaluate distances between different transceivers */
        for (size_t i{0};i < 3;i++) {
            distance.at(i) = find_dist(transceivers.at(i % 3),
                                       transceivers.at((i + 1) % 3));
        }

        bool is_communication_possible{false};

        /* if any one transceiver can directly communicate with
         * other two then communication among every one is possible */
        if (distance.at(0) <= direct_range*direct_range and
        distance.at(1) <= direct_range*direct_range) {
            is_communication_possible = true;
        }
        if (distance.at(1) <= direct_range*direct_range and
        distance.at(2) <= direct_range*direct_range) {
            is_communication_possible = true;
        }
        if (distance.at(0) <= direct_range*direct_range and
        distance.at(2) <= direct_range*direct_range) {
            is_communication_possible = true;
        }

        /* print whether communication is possible
         * among chef, server-head and sous-chef */
        if (is_communication_possible) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
    return 0;
}