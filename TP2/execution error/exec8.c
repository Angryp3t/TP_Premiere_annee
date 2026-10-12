#include <stdio.h>

int main() {
    int t[3] = {10, 20, 30};
    int i = -1;
    if (i<0){
        printf("Aucun rang negatif possible !");
    } else {
        printf("%d\n", t[i]);
    }
    return 0;
}
// il n'y pas d'élément t[-1] dans t.
// Les éléments commencent au rang 0 jusqu'à 2. Il n'existera jamais de rang négatif.