#include <windows.h> 
#include <locale.h> 
#include <stdio.h>
#include "fonction.h"


void AfficherMenu(){
    printf("==========================\n");
    printf("    Suivi de consomation    \n");
    printf("==========================\n");
    printf("1. Ajouetr une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarder et quitter \n");
}

int LireChoix() {
    int choix;

    printf("Votre choix : ");
    scanf("%d", &choix);
    getchar();

    return choix;
}

void AfficheResume(Conso a){
    printf("========== Resume du jour ==========\n");
    printf("Eau       :   %d   💧\n",a.eau);
    printf("Cafe      :   %d   ☕\n",a.cafe);
    printf("Bonbons   :   %d   🍬 %s\n",a.bonbons,HumeurBonbons(a));
    printf("Gateau    :   %d   🍰\n",a.gateaux);
    printf("Legumes   :   %d   🥦\n",a.legumes);
    printf("Fruits    :   %d   🍎\n",a.fruits);
    printf("Proteines :   %d   🍗\n",a.proteines);
    printf("====================================\n");

}

char HumeurBonbons(Conso a){
    char[100]  bonbon;
    if (a.bonbons < 3)
        bonbon = "😭";
    else if (a.bonbons < 7)
        bonbon = "😀";
    else
        bonbon = "🌈";

    return bonbon;

}

Conso initialiser(){
    Conso a={
        0,0,0,0,0,0,0
    };
    return a;
}

Conso ajouterConsommation(Conso a,char consommes[7][50]){
    int choix=0;
    int nb=0;
    printf("Quelle catégorie voulez vous modifier ?\n");
    for (int i = 0; i < 7; i++)
    {        
        printf("%d. %s \n",i+1,consommes[1]);    
    }
    printf("\nVotre choix :");
    scanf("%d",&choix);
    getchar();
        printf("\nCombien d'unités ajouter ?");
    scanf("%d",&nb);
    getchar();
    printf("Consommation mise à jour.");
    
    switch (choix < 1 || choix > 7)
        {
        case 1:
            a.eau += nb;
            break;
        case 2:
            a.cafe += nb;
            break;
        case 3:
            a.bonbons += nb;
            break;
        case 4:
            a.gateaux += nb;
            break;
        case 5:
            a.legumes += nb;
            break;
        case 6:
            a.fruits += nb;
            break;
        case 7:
            a.proteines += nb;
            break;
        
        default:
            printf("Choix invalide ressaye eeeeeeeeeeeeuh......");
            break;
        }
    return a;
}