#ifndef abc
#define abc

typedef struct Animal{
    char nom[50];
    int age;
    char habitat[50];
    char sante[50];
    int faim;
}Animal ;

int nourrir(Animal a);
Animal saisir();
Animal temps(Animal a[20]);

int lireChoix();
void afficherMenu();

#endif