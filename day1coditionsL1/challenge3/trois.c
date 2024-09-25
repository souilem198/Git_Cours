#include<stdio.h>
int main()
 {

   int a,b,somme,triple;
   printf("veuillez entrer le nombre a :");
   scanf("%d",&a);
   printf("veuillez entrer le nombre b :");
   scanf("%d",&b);
   somme = a+b;
   if(a==b){
    triple = somme*3;
    printf("la somme est :%d",triple);
   }
   else printf("la somme est :%d",somme);


   return 0;
 }
