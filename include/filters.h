#ifndef FILTERS_H
#define FILTERS_H

// Vérifie si un mot contient une lettre
int contains_letter(const char *word, char letter);

// Vérifie si un mot n'a PAS une lettre
int excludes_letter(const char *word, char letter);

// Vérifie si un mot contient une sous-chaîne
int contains_substring(const char *word, const char *sub);

// Vérifie si une lettre est à une position donnée
int letter_at(const char *word, char letter, int position);

#endif
