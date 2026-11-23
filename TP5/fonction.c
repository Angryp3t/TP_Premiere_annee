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
    printf("3. Afficher les objectifs et le score\n");
    printf("4. Sauvegarder et quitter \n");
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
    printf("Eau       :   %d   💧",a.eau);
    AfficherBarre(a.eau, 30);
    printf("Cafe      :   %d   ☕",a.cafe);
    AfficherBarre(a.cafe, 10);
    printf("Bonbons   :   %d   🍬",a.bonbons);
    AfficherBarre(a.bonbons, 10);
    printf("Gateau    :   %d   🍰",a.gateaux);
    AfficherBarre(a.gateaux, 20);
    printf("Legumes   :   %d   🥦",a.legumes);
    AfficherBarre(a.legumes, 15);
    printf("Fruits    :   %d   🍎",a.fruits);
    AfficherBarre(a.fruits, 10);
    printf("Proteines :   %d   🍗",a.proteines);
    AfficherBarre(a.proteines, 20);
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
        22,0,5,18,12,6,8
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