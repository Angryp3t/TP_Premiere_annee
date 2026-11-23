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

Conso initialiser(){
    Conso a={
        0,0,0,0,0,0,0
    };
    printf("😀 c'est fini !");
    return a;
}