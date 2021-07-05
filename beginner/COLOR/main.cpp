#include <bits/stdc++.h>

template <typename T>
T find_max(T& A, T& B, T& C) {
    if (A > B) {
        if (A > C) {
            return A;
        } else {
            return C;
        }
    } else {
        if (B > C) {
            return B;
        } else {
            return C;
        }
    }
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
        /* get number_of_rooms */
        int32_t number_of_rooms;
        std::cin >> number_of_rooms;

        /* get room_colors */
        std::string room_colors;
        std::cin >> room_colors;

        /* evaluate number_of_rooms with each color */
        int32_t room_R{0}, room_B{0}, room_G{0};
        for (const auto& color: room_colors) {
            if (color == 'R') {
                room_R += 1;
            } else if(color == 'B') {
                room_B += 1;
            } else {
                room_G += 1;
            }
        }

        int32_t max_same_colored_room{find_max(room_R,room_B,room_G)};
        int32_t min_room_to_paint=room_colors.length() - max_same_colored_room;

        /* print appropriate message */
        std::cout << min_room_to_paint << std::endl;
    }
    return 0;
}