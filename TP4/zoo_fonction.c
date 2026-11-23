#include <stdio.h>
#include <string.h>
#include "zoo.h"

void afficherMenu()
{
    printf("\n===== ZOO VIRTUEL =====\n");
    printf("1. Ajouter un animal\n");
    printf("2. Afficher tout les animaux\n");
    printf("3. Nourrir un animal\n");
    printf("4. Faire viellir les animaux\n");
    printf("5. Verifier la sante d'un animal\n");
    printf("6. Afficher les statiqtiques du zoo\n");
    printf("0. Quitter\n");
}

int lireChoix()
{
    int choix;
    scanf("%d",&choix);
    return choix;
}

Animal saisir(){
    Animal a ;
    printf("Indiquez son nom :");
    scanf("%s",&a.nom);
    getchar();

    printf("Indiquez son age (0 a 500) : ");
    scanf("%d",&a.age);
    getchar();
    while (a.age < 0 || a.age >500)
    {
        printf("Indiquez un pourcentage de faim valide (0 a 500) : ");
        scanf("%d",&a.age);
        getchar();
    }
    
    printf("Indiquez son habitat  (terrestre, aquatique ou volant) : ");
    scanf("%s",&a.habitat);
    getchar();
     while ((strcmp(a.habitat,"terrestre")) != 0 && (strcmp(a.habitat,"aquatique")) != 0 &&(strcmp(a.habitat,"volant")) != 0)
    {
        printf("Indiquez un niveau de sante valide (terrestre, aquatique ou volant) : ");
        scanf("%s",&a.habitat);
        getchar();
    }
    
    printf("Indiquez son niveau de sante (bon, moyen, mauvais) : ");
    scanf("%s",&a.sante);
    getchar();
     while ((strcmp(a.sante,"bon")) != 0 && (strcmp(a.sante,"mauvais")) != 0 &&(strcmp(a.sante,"moyen")) != 0)
    {
        printf("Indiquez un niveau de sante valide (bon, moyen, mauvais) : ");
        scanf("%s",&a.sante);
        getchar();
    }
    
    printf("Indiquez son pourcentage de faim (0 a 100) : ");
    scanf("%d",&a.faim);
    getchar();
    while (a.faim < 0 || a.faim >100)
    {
        printf("Indiquez un pourcentage de faim valide (0 a 100) : ");
        scanf("%d",&a.faim);
        getchar();
    }
    
    

    return a;
}

int nourrir(Animal a){
    if (a.faim > 30)
    {
        return a.faim-30;
    } else {
        return 0;
    }
}

Animal temps(Animal a[20]){
    for (int i = 0; i < 20; i++)
    {
        a[i].age++;
        if (a[i].faim<80)
        {
            a[i].faim = a[i].faim +20;
        } else {a[i].faim=100;}
        if (a[i].faim >= 67){
            strcpy(a[i].sante, "mauvais");
        } else if (a[i].faim >= 33)
        {
            strcpy(a[i].sante, "moyen");
        } else {strcpy(a[i].sante,"bon");}
        if (a[i].faim == 100)
        {
            for (int j = i; j < 20-i; j++)
            {
                if (i!=19 && a[i].faim == 100)
                {
                    a[i]=a[i+1];
                    a[i+1].faim=100;
                }
            }
        }
    }
}