#include <stdio.h>

int main() {
    char nom[100];
    printf("Nom ? ");
    scanf("%s", &nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
// il manque '&' devant 'nom' a la ligne 5 du scanf : scanf("%s", nom); 
// taille de nom trop petite pour un nom complet.