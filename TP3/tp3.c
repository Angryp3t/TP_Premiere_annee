#include "tp3_fonctions.h"
#include <stdio.h>

int main(void)
{
    //==============================================    
    // Exo 1 =======================================
    //============================================== 
    int menu=7;
    int id=0;
    int tableau[30][3];
    int nb=0;
    int quitter =1;
    printf("Vous etes de base sur le menue de l'exo 1, pour passez à l'exo 2 appuyez sur quitter.\n");
    while (menu == 7 && quitter == 1)
    {    
        affichage_options();
        scanf("%d",&menu);
        lire_menu(menu);
        switch (menu)
        {
        case 1:
            nb = saisirNombreEleves();
            break;
        case 2:
            saisirNotes(nb,tableau);
            break;
        case 3:
            affichage_Notes(nb,tableau);
            break;
        case 4:
            printf("Entrez l'indice de l'eleve (1 a %d) :",nb);
            while (id<1 || id>nb)
            {
                scanf("%d",&id);
                if (id<1 || id>nb)
                {
                    printf("Valeur impossible réessaye (1 a %d):\n",nb);
                }
            }
            printf("Moyenne de l'eleve %d : %f \n",id,calculerMoyenneEleve(id,tableau));
            id=0;
            break;
        case 5:
            printf("Moyenne generale de la classe : %f \n",calculerMoyenneGenerale(nb,tableau));
            break;
        case 6:
            afficherMeilleuresNotes (nb, tableau);
            break;
        case 0:
            quitter=0;
            break;
        default:
            printf("Incomprehensible : reessayez\n");
            break;
        }menu=7;}

    //==============================================    
    // Exo 2 =======================================
    //============================================== 
    printf("Voici L'exo 2 :");
    menu = 3;
    while (menu==3)
    {
        afficher_menu();
        printf("Votre choix : ");
        scanf("%d",menu);
        printf("\n");
        switch (menu)
        {
        case 1:
            break;
        
        case 0:
            return 0;
            break;

        default:
            printf("Choix invalide veuillez retentez.\n");
            break;
        }
    }
    

    
    return 0;
}
