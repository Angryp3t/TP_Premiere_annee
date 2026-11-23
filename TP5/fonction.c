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
    printf("Bonbons   :   %d   🍬\n",a.bonbons);
    printf("Gateau    :   %d   🍰\n",a.gateaux);
    printf("Legumes   :   %d   🥦\n",a.legumes);
    printf("Fruits    :   %d   🍎\n",a.fruits);
    printf("Proteines :   %d   🍗\n",a.proteines);
    printf("====================================\n");

}

char HumeurBonbons(Conso a){
    char bonbon;
    if (a.bonbons < 3)
        bonbon = "😭";
    else if (a.bonbons < 7)
        bonbon = "😀";
    else
        bonbon = "🌈";

}

Conso initialiser(){
    Conso a={
        0,0,0,0,0,0,0
    };
    return a;
}

Conso ajouterConsommation(Conso a,char consommes[7][50]){
    for (int i = 0; i < 7; i++)
    {
        printf("Quelle catégorie voulez vous modifier ?\n");
        
    }    
}