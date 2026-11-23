#include <windows.h> 
#include "fonction.h"
#include <locale.h> 
#include <stdio.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    setlocale(LC_ALL, ".UTF-8");
    char consommes[7][50]={
        "Eau 💧",
        "Café ☕",
        "Bonbons 🍬",
        "Gâteau 🍰 ",
        "Légumes 🥦",
        "Fruits 🍎",
        "Protéines 🍗"};
    Conso a = initialiser();
    char humeur[7][50]={"😭","😇","😇","😇","🤔","😢","🌈",};

    Objectifs obj = {8, 5, 3, 2};

    int choix;

    do {
        AfficherMenu();
        choix = LireChoix();

        switch (choix) {
            case 1:
                printf("Ajouter une consommation\n");
                a = ajouterConsommation(a, consommes);
                break;

            case 2:
                HumeurBonbons(a, humeur);
                AfficheResume(a, humeur);
                break;
            case 3:
                AfficherObjectifsEtScore(a, obj);
                break;
            case 4:
                printf("Sauvegarde et quittez\n");
                break;

            default:
                printf("Choix invalide, recommencez.\n");
        }

        printf("\n");

    } while (choix != 4);

    return 0;

}