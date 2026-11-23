#ifndef CORR
#define CORR


void AfficherMenu();
int LireChoix();
void AfficheResume(Conso a, char humeur[7][50]);
void AfficheResume();
void AfficherBarre(int val, int max);

typedef struct Conso
{
    int eau;
    int cafe;
    int bonbons;
    int gateaux;
    int legumes;
    int fruits;
    int proteines;
}Conso;

Conso initialiser();
Conso ajouterConsommation(Conso a, char consommes[7][50]);
void HumeurBonbons(Conso a,char humeur[7][50]);

#endif
