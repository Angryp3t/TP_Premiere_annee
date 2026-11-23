#include <windows.h> 
#include "fonction.h"
#include <locale.h> 
#include <stdio.h>


int main(){
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    setlocale(LC_ALL, ".UTF-8");
    Conso a = initialiser();

    int choix;

    do {
        AfficherMenu();
        choix = LireChoix();

        switch (choix) {
            case 1:
                printf("Ajouter une consommation\n");
                break;

            case 2:
                AfficheResume(a);
                break;

            case 3:
                printf("Sauvegarde et fermeture du programme\n");
                break;

            default:
                printf("Choix invalide, recommencez.\n");
        }

        printf("\n");

    } while (choix != 3);

    return 0;

}