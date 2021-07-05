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
        /* get character */
        char ship_class_ID;
        std::cin >> ship_class_ID;

        if (std::tolower(ship_class_ID) == 'b') {
            std::cout << "BattleShip" << std::endl;
        } else if (std::tolower(ship_class_ID) == 'c') {
            std::cout << "Cruiser" << std::endl;
        } else if (std::tolower(ship_class_ID) == 'd') {
            std::cout << "Destroyer" << std::endl;
        } else if (std::tolower(ship_class_ID) == 'f') {
            std::cout << "Frigate" << std::endl;
        } else {
            std::cout << "ship_class_ID isn't defined!\n" ;
        }
    }
    return 0;
}