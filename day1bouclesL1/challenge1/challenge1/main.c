#include<stdio.h>

int main()
 {
     int nombre,i,m;
     printf("veuillez entrer un nombre :");
     scanf("%d",&nombre);
    for(i=1;i<=10;i++){

       m = nombre*i;
        printf("%d * %d = %d\n", nombre,i,m);
     }



     return 0;
 }
