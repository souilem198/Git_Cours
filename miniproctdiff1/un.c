#include<stdio.h>
#include<string.h>


int main(){
    int choix,x;
    int trouver;
    trouver = 0;
    char titre[100][20];
    char auteur[100][20];
    float prix[100];
    int quantite[100];
    x =0;
    do{
    printf("1 Ajouter un livre au stock");
     printf("2 Afficher tous les livres disponibles.");
      printf("3 Rechercher un livre par son titre.");
       printf("4 Mettre à jour la quantité d'un livre");
       printf("5 Mettre à jour la quantité d'un livre");
       printf("6 Mettre à jour la quantité d'un livre");
       printf("7quiter");
       printf("entrer choix");
       scanf("%d",&choix);
       switch(choix){
           case 1:printf("ajouter tire de livre %d",x+1);
                  scanf("%s",&titre[x]);
                  printf("entre auteur ");
                  scanf("%s",&auteur[x]);
                  printf("ajouter prix de livre ");
                  scanf("%f",&prix[x]);
                  printf("ajouter quantite de livre ");
                  scanf("%d",&quantite[x]);
                  x++;

       }
       break;
        case 2:
           int i;
           for(i=0;i<x;i++){
            printf("%d",titre[i]);
            printf("%d",auteur[i]);
            printf("%.2f",prix[i]);
            printf("%d",quantite[i]);

           }
           break;
        case 3:
            char nom[20];
            printf("entrer le nombre de livre a mis a jour");
            scanf("%d",&nom);
            for(i=0;i<x;i++){
                if (strcasecmp titre[i]==0){
                    prix("entre le stock ajouter ");
                    scanf("%d",quantite[i]);
                    prix("stock a ete mise ajour");
                    trover ++;
                    break;
                }
                if(trouver == 0)
                    printf("non trouver");
                break;


            }





 }while(choix!=7);

   return 0;

}
