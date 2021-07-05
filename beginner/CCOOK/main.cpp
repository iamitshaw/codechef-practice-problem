#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_competitors */
    int32_t number_of_competitors;
    std::cin >> number_of_competitors;

    while (number_of_competitors--) {
        /* get problem_status for Cook-Off problems */
        std::array<int32_t, 5> problem_status{};
        for (int32_t i{0};i < 5;i++) {
            std::cin >> problem_status[i];
        }

        /* evaluate problem_solved */
        int32_t problem_solved{0};
        for (const auto& status: problem_status) {
            problem_solved += status;
        }

        /* print appropriate message */
        switch(problem_solved) {
            case 0: {
                std::cout << "Beginner\n";
                break;
            }
            case 1: {
                std::cout << "Junior Developer\n";
                break;
            }
            case 2: {
                std::cout << "Middle Developer\n";
                break;
            }
            case 3: {
                std::cout << "Senior Developer\n";
                break;
            }
            case 4: {
                std::cout << "Hacker\n";
                break;
            }
            default: {
                /* all five problems are solved */
                std::cout << "Jeff Dean\n";
                break;
            }
        }
    }
    return 0;
}