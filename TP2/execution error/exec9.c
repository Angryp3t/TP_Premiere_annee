#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n",a , b); 
    return 0;
}
// le printf demmande deux int, mais le proggramme ne lui en donne qu'un : 'printf("a=%d b=%d\n", b);'