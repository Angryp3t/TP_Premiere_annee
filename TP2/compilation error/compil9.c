#include <stdio.h>

int main() {
    char s[6] = "Hello";
    printf("%s\n", s);
    return 0;
}
// taille de la variable 's' depassee, s ne prend que 3 éléments or ici on lui en donne 6. 
// [lin 4, col 16] : 'char s[3] = "Hello";'