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

Conso initialiser(){
    Conso a={
        0,0,0,0,0,0,0
    };
    return a;
}

Conso ajouterConsommation(Conso a,char consommes[7][50]){
    printf("Quelle catégorie voulez vous modifier ?\n");
}