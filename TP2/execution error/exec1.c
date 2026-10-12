#include <stdio.h>

int main() {
    int a = 2;
    int b = 0;
    if (b!=0){
        int c = a / b;
        printf("%d\n", c);
    } else {
        printf("Erreur impossibilite de diviser par 0 ! \n");
    }
    return 0;
}
// Exception has occurred. Arithmetic exception
// Impossibilité de diviser par 0. [lin 6, col 17] : 'int c = a / b;'