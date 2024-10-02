#include<stdio.h>
#include<string.h>>
int nom_rech[20];
int x,i;
int choix,modifier;
char nom[100][30];
char num_tele[100][20];
char mail[100][30];

void modification(){
     int nouv_tele[20];
     int nouv_mail[20];
    do{
        printf("1 Modifier le numero de telephon \n");
        printf("2 Modifier l adresse mail\n");
        printf("entrer le nom que voulez modifier leur numero de telephon ");
        scanf("%s",nom_rech);
        printf(" entrer votre choix ");
        scanf("%d",&modifier);
        switch(modifier){
        case 1:
            printf("entrer le numero de telefon ");
            scanf("%s",&nouv_tele);
            int r = 0;
            for(i=0;i<x;i++){
                if(strcmp(nom_rech,nom[i])==0){
                    strcpy(nouv_tele,num_tele[i]);
                    printf("le numero a ete modifier avec succes");
                    r++;
                    break;
                }
            }
                if(r==0){
                    printf("le contact ne touve pas");
                }
                break;

        case 2:
            printf("entrer email ");
            scanf("%s",&nouv_mail);
            int m = 0;
            for(i=0;i<x;i++){
                if(strcmp(nom_rech,nom[i])==0){
                    strcpy(nouv_mail,mail[i]);
                    printf("email a ete modifier avec succes");
                    m++;
                    break;
                }
            }
                if(r==0){
                    printf("le contact ne touve pas");
                }
               break;
              default:printf("choix invalide ");
        }

    }

void supprimer(){
    char sup_contact[20;]
    printf("entrer le contact que voulez soupprimer ");
    scanf("%s",&sup_contact);
    int s =0;
    for(i=0;i<x;i++){
        if(strcmp(sup_contact,nom[i])==0){
        s =s+1;
        for(int j =i;j<x-1;j++){
            strcpy(nom[i],nom[j+1]);
            strcpy(num_tele[i],num_tele[j+1]);
            strcpy(mail[i],mail[j+1]);
        }

        }

    }



}





int main(){
    do{
        printf("programme pour gestion des contacts \n");
        printf("1 Ajouter un contact \n");
        printf("2 Modifier un contact \n");
        printf("3 Suprimer un contact \n");
        printf("4 Afficher tous les contacts \n");
        printf("5 Recherche un contact \n");
        printf("6 Quiter le programme \n");
        printf("entrer votre choix");
        scanf("%d",&choix);
        switch(choix){
            case 1:
                printf("entrer le nom du contact ",x+1);
                scanf("%s",nom[x]);
                printf("entrer le numero du telephon du contact ",x+1);
                scanf("%s",num_tele[x]);
                printf("entrer email du contact ",x+1);
                scanf("%s",mail[x]);
                printf("contact ajouter avec succes ");
                x++;
                break;
            case 2:
                modification();
                break;


        }


    }while(choix>=1 && choix<=6);











  return 0;


}
