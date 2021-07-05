#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_soldiers */
    int32_t number_of_soldiers;
    std::cin >> number_of_soldiers;

    std::vector<int32_t> soldiers_weapon(number_of_soldiers);

    /* get weapon_count for soldiers */
    for (int32_t i{0};i < number_of_soldiers;i++) {
        std::cin >> soldiers_weapon.at(i);
    }

    int32_t lucky_soldiers_count{0}, unlucky_soldiers_count{0};
    for (int32_t i{0};i < number_of_soldiers;i++) {
        if (soldiers_weapon.at(i) % 2 == 0) {
            lucky_soldiers_count += 1;
        } else {
            unlucky_soldiers_count += 1;
        }
    }

    /* print appropriate message */
    if (lucky_soldiers_count > unlucky_soldiers_count) {
        std::cout << "READY FOR BATTLE" << std::endl;
    } else {
        std::cout << "NOT READY" << std::endl;
    }
    return 0;
}