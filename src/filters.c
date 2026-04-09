#include <string.h>
#include "filters.h"

int contains_letter(const char *word, char letter) {
    for (int i = 0; word[i]; i++) {
        if (word[i] == letter)
            return 1;
    }
    return 0;
}

int excludes_letter(const char *word, char letter) {
    return !contains_letter(word, letter);
}

int contains_substring(const char *word, const char *sub) {
    return strstr(word, sub) != NULL;
}

int letter_at(const char *word, char letter, int position) {
    return word[position] == letter;
}


