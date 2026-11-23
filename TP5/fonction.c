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

void AfficheResume(Conso a, char humeur[7][50]){
    printf("========== Resume du jour ==========\n");
    printf("Eau       :   %d   💧 %s",a.eau, humeur[0]);
    AfficherBarre(a.eau, 10);
    printf("Cafe      :   %d   ☕ %s",a.cafe, humeur[1]);
    AfficherBarre(a.cafe, 10);
    printf("Bonbons   :   %d   🍬 %s",a.bonbons, humeur[2]);
    AfficherBarre(a.bonbons, 10);
    printf("Gateau    :   %d   🍰 %s",a.gateaux, humeur[3]);
    AfficherBarre(a.gateaux, 10);
    printf("Legumes   :   %d   🥦 %s",a.legumes, humeur[4]);
    AfficherBarre(a.legumes, 10);
    printf("Fruits    :   %d   🍎 %s",a.fruits, humeur[5]);
    AfficherBarre(a.fruits, 10);
    printf("Proteines :   %d   🍗 %s",a.proteines, humeur[6]);
    AfficherBarre(a.proteines, 10);
    printf("====================================\n");

}

void HumeurBonbons(Conso a,char humeur[7][50]){
    int cons[7]={a.eau,a.cafe,a.bonbons,a.gateaux,a.legumes,a.fruits,a.proteines};
    for (int i = 0; i < 7; i++)
    {
        switch (i)
        //"😭","😇","😇","😇","😢","😢","🌈"
        {
        case 0:
            if (cons[i]<3){strcpy(humeur[i], "😭");}
            else if (cons[i]<7){strcpy(humeur[i],"😢");}
            else if (cons[i]<12){strcpy(humeur[i],"🥲");}
            else {strcpy(humeur[i],"😁");}
            break;
        case 1:
        case 2:
        case 3:
            if (cons[i]<3){strcpy(humeur[i], "😇");}
            else if (cons[i]<7){strcpy(humeur[i],"😊");}
            else if (cons[i]<12){strcpy(humeur[i],"😕");}
            else {strcpy(humeur[i],"💀");}
            break;
        case 4:
        case 5:
            if (cons[i]<3){strcpy(humeur[i], "😢");}
            else if (cons[i]<7){strcpy(humeur[i],"🥲");}
            else if (cons[i]<12){strcpy(humeur[i],"😝");}
            else {strcpy(humeur[i],"🥳");}
            break;
        case 6:
            if (cons[i]<3){strcpy(humeur[i], "🌈");}
            else if (cons[i]<7){strcpy(humeur[i],"😐");}
            else if (cons[i]<12){strcpy(humeur[i],"😶");}
            else {strcpy(humeur[i],"💀🩸");}
            break;
        default:
            break;
        }
    }
}
void AfficherBarre(int val, int max){

    if (max <= 0)
    max = 1;
    if (val < 0)
    val = 0;
    if (val > max)
    val = max;

    int result = (val*10)/max;

    for (int i = 0; i < result ; i++)
    {
        printf("█");
    }

    for (int j = 0; j < 10-result; j++)
    {
        printf("░");
    }
    printf("\n");
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
        printf("%d. %s \n",i+1,consommes[i]);    
    }
    printf("\nVotre choix :");
    scanf("%d",&choix);
    getchar();
        printf("\nCombien d'unités ajouter ?");
    scanf("%d",&nb);
    getchar();
    printf("Consommation mise à jour.");
    
    switch (choix)
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