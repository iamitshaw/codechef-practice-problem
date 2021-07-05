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
        /* get number_of_movies */
        int32_t number_of_movies;
        std::cin >> number_of_movies;

        /* get length_of_movies */
        std::vector<int32_t> length_of_movie(number_of_movies);
        for (int32_t i{0};i < number_of_movies;i++) {
            std::cin >> length_of_movie.at(i);
        }

        /* get rating_of_movies */
        std::vector<int32_t> rating_of_movie(number_of_movies);
        for (int32_t i{0};i < number_of_movies;i++) {
            std::cin >> rating_of_movie.at(i);
        }

        /* evaluate index_of_movie */
        int32_t j{0};
        for (int32_t i{1};i < number_of_movies;i++) {
            int32_t temp_value{length_of_movie[i]*rating_of_movie[i]};
            int32_t movie_value{length_of_movie[j]*rating_of_movie[j]};

            if (temp_value > movie_value) {
                j = i;
            } else if (temp_value == movie_value) {
                if (rating_of_movie[i] > rating_of_movie[j]) {
                    j = i;
                }
            }
        }

        /* print appropriate message */
        std::cout << (j + 1) << std::endl;
    }
    return 0;
}