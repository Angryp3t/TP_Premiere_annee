#include <stdio.h>

// ici le comilateur ne dit malheureusement rien mais il devrait,
// executer pour essayer de comprendre ce qu'il se passe 
int main() {
    int tableau[5];
    int i = 12;
    for (int j = 0; j < 5; j++)
    {
        tableau[j] = 1;
    }
    printf("OK %d\n", tableau[4]);
    return 0;
}
// tableau[5] inexistant : tableau possède 5 éléments de tableau[0] a tableau[4]. [lin 12, col 23]