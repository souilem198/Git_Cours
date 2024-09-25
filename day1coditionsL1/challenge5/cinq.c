#include<stdio.h>
int main()
{
    int annee,mois,jours,heures,minutes,secondes,choix;
    printf("veuillez entrer l annee :");
    scanf("%d",&annee);
    printf("1 convertir annee en mois\n");
    printf("2 convertir annee en jours\n");
    printf("3 convertir annee en heures\n");
    printf("4 convertir annee en minutes\n");
    printf("5 convertir annee en secondes\n");

    printf("veuillez entrer annee de votre choix :");
    scanf("%d",&choix);

    switch(choix){
        case 1 :
            mois = annee*12;
            printf("mois : %d",mois);
            break;
        case 2 :
            jours = annee*365;
            printf("jours :%d",jours);
            break;
        case 3 :
            heures = jours*24;
            printf("heures :%d",heures);
            break;
        case 4 :
            minutes = heures*60;
            printf("minutes :%d",minutes);
            break;
        case 5 :
            secondes = minutes*60;
            printf("secondes :%d",secondes);
            break;
            default : printf("incorrect");
            break;
    }


    return 0;
}
