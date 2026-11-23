#include <windows.h> 
#include "fonction.h"
#include <locale.h> 
#include <stdio.h>


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

    int choix;

    do {
        AfficherMenu();
        choix = LireChoix();

        switch (choix) {
            case 1:
                printf("Ajouter une consommation\n");
                ajouterConsommation(a,consommes);
                break;

            case 2:
                AfficheResume(a,humeur);
                break;

            case 3:
                printf("Sauvegarde et fermeture du programme\n");
                return 0;

            default:
                printf("Choix invalide, recommencez.\n");
        }

        printf("\n");

    } while (choix != 3);

    return 0;

}