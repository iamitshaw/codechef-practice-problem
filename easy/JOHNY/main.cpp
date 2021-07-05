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
        /* get number_of_songs */
        int32_t number_of_songs;
        std::cin >> number_of_songs;

        /* get length_of_songs */
        std::vector<int32_t> length_of_songs(number_of_songs);
        for (int32_t i{0};i < number_of_songs;i++) {
            std::cin >> length_of_songs.at(i);
        }

        /* get index_of_favorite_song */
        int32_t index;std::cin >> index;

        /* obtain unique_length of favorite_song */
        int32_t unique_length{length_of_songs[index-1]};

        /* determine count_of_songs in playlist whose
         * lengths are smaller than favorite_song */
        int32_t count_length{0};
        for (const auto& length: length_of_songs) {
            if (length < unique_length) {
                count_length += 1;
            }
        }

        /* print appropriate message */
        std::cout << (count_length+1) << std::endl;
    }
    return 0;
}