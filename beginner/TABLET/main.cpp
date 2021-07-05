#include <bits/stdc++.h>

int main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        struct Tablet {
            int32_t width;
            int32_t height;
            int32_t price;
        };

        /* get number_of_tablets */
        int32_t number_of_tablets;
        std::cin >> number_of_tablets;

        /* get budget_of_chef */
        int32_t budget_of_chef;
        std::cin >> budget_of_chef;

        /* get tablet_information */
        std::vector<Tablet> tablet(number_of_tablets);
        for (int32_t i{0};i < number_of_tablets;i++) {
            std::cin >> tablet[i].width;
            std::cin >> tablet[i].height;
            std::cin >> tablet[i].price;
        }

        /* evaluate tablet with max_area */
        bool is_tablet_available{false};
        int32_t temp_area{0};int32_t max_area{0};

        for (int32_t i{0};i < number_of_tablets;i++) {
            if (tablet[i].price <= budget_of_chef) {
                is_tablet_available = {true};
                temp_area = {tablet[i].width*tablet[i].height};

                /* update maximum_area of tablet */
                if (temp_area > max_area) {
                    max_area = temp_area;
                }
            }
        }

        /* print appropriate message */
        if (is_tablet_available) {
            std::cout << max_area << std::endl;
        } else {
            std::cout << "no tablet" << std::endl;
        }
    }
    return 0;
}