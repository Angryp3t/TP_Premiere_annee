#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}
// boucle infini le i est toujours inférieure à 10 et donc on ne sort jamais du while.