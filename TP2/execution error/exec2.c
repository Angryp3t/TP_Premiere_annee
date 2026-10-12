#include <stdio.h>

int main() {
    int tab[5];
    int b = sizeof(tab)/sizeof(tab[0]);
    for (int i = 0; i < b; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < b; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
// tab ne possede qu'une taille de 5 pas de 10.