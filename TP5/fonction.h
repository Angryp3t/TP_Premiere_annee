#ifndef CORR
#define CORR

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
void AfficherMenu();
int LireChoix();
void AfficheResume(Conso a, char humeur[7][50]);
void AfficherBarre(int val, int max);


#endif
