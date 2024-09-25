#include<stdio.h>
int main()
 {
     int a;
     printf("veuillez entrer un nombre :");
     scanf("%d",&a);
     if(a<0)
        printf("negatif");
     else if (a>0)
        printf("positif");
     else
        printf("le nombre egal a zero");



     return 0;
 }
