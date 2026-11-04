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
    printf("Vous etes de base sur le menue de l'exo 1, pour passez à l'exo 2 appuyez sur quitter.\n");
    while (menu ==7)
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
            break;
        default:
            printf("Incomprehensible : reessayez\n");
            break;
        }menu=7;}

    //==============================================    
    // Exo 2 =======================================
    //============================================== 

    
    return 0;
}
