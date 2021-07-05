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
        /* get number_of_sticks */
        int32_t number_of_sticks;
        std::cin >> number_of_sticks;

        /* get length_of_sticks */
        std::vector<int32_t> stick_length(number_of_sticks);
        for (int32_t i{0};i < number_of_sticks;i++) {
            std::cin >> stick_length.at(i);
        }

        /* determine frequency of sticks_length */
        std::map<int32_t, int32_t> map;
        for (const auto& stick: stick_length) {
            auto it{map.find(stick)};
            if (it != map.end()) {
                /* update frequency */
                it->second += 1;
            } else {
                /* insert stick */
                map.insert({stick, 1});
            }
        }

        /* evaluate maximum_area_of_rectangle */
        int32_t maximum_area{-1};
        for (auto item_I{map.rbegin()}; item_I != map.rend(); item_I++) {
            if (item_I->second >= 4) {
                /* if possible to make a square */
                maximum_area = item_I->first * item_I->first;
                break;
            } else if (item_I->second >= 2) {
                /* item_I: length_of_rectangle */
                auto item_II{item_I};item_II++;
                while (item_II != map.rend()) {
                    if (item_II->second >= 2) {
                        /* item_II: breadth_of_rectangle */
                        maximum_area = item_I->first * item_II->first;
                        break;
                    } else {
                        item_II++;
                    }
                }

                /* no further processing is required */
                break;
            }
        }

        /* print appropriate message */
        std::cout << maximum_area << std::endl;
    }
    return 0;
}