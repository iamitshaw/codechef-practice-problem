#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get character */
    char character;
    std::cin >> character;

    /* check whether character
     * is consonant or vowel */
    switch(character) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std::cout << "Vowel" << std::endl;
            break;
        default:
            std::cout << "Consonant" << std::endl;
            break;
    }
    return 0;
}