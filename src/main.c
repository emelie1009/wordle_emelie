#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filters.h"

#define MAX_WORDS 10000
#define WORD_SIZE 6

char words[MAX_WORDS][WORD_SIZE];
int word_count = 0;

// Charger les mots depuis fichier
void load_words(const char *filename) {
    FILE *file = fopen("ressource/bdd_wordle.txt", "r");
    if (!file) {
        printf("Erreur ouverture fichier\n");
        exit(1);
    }

    while (fscanf(file, "%s", words[word_count]) != EOF) {
        word_count++;
    }

    fclose(file);
}
// Appliquer filtres
void apply_filters() {
    char include, exclude;
    char sub[WORD_SIZE];

    printf("Lettre à inclure : ");
    scanf(" %c", &include);

    printf("Lettre à exclure : ");
    scanf(" %c", &exclude);

    printf("Substring : ");
    scanf("%s", sub);

    printf("\nMots filtrés :\n");

    for (int i = 0; i < word_count; i++) {
        if (contains_letter(words[i], include) &&
            excludes_letter(words[i], exclude) &&
            contains_substring(words[i], sub)) {
            printf("%s\n", words[i]);
        }
    }
}

int main() {
    load_words("resource/bdd_wordle.txt");
    apply_filters();
    return 0;
}
