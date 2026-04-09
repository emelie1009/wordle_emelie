 #include <stdio.h>

 int main() {
     FILE *file = fopen("ressource/bdd_wordle.txt" , "r");

     if (file == NULL) {
	printf("Erreur ouverture fichier\n");
	return 1;
     }

     char word[100];

     while (fgets(word, sizeof(word),file)) {
	printf("%s", word);
     }

     fclose(file);
     return 0;
 }

