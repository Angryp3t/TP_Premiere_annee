#include "tp3_fonctions.h"
#include <stdio.h>

int main(void)
{
    int menu=7;
    int id=0;
    int tableau[30][3];
    affichage_options();
    scanf("%d",&menu);
    lire_menu(menu);
    int nb = saisirNombreEleves();
    saisirNotes(nb,tableau);
    affichage_Notes(nb,tableau);
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
    printf("Moyenne generale de la classe : %f \n",calculerMoyenneGenerale(nb,tableau));
    return 0;
}
