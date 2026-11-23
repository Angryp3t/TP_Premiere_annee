#include <stdio.h>
#include <string.h>
#include "zoo.h"

int choix = -1;

int main(){
    Animal tab[20];
    int cpt = 0;

     while (choix != 0)
    {
        afficherMenu();

        printf("\nVotre choix : ");
        choix = lireChoix();

        switch (choix)
        {
            case 1:
                tab[cpt] = saisir();
                cpt++;
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                temps(tab);
                break;

            case 5:
                break;

            case 6:
                break;

            case 0:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide.\n");
            
        }
    }
    Animal a = saisir();
    printf("%d\n\n",a.faim);
    a.faim = nourrir(a);  
    printf("%d",a.faim);  
    return 0;
}