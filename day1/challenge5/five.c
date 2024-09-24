#include<stdio.h>
int main()
{
   float celsius;
   printf("veuillez entrer la tempartature en celsius :");
   scanf("%f",&celsius);
   if (celsius < 0){
    printf("l etat de l eau est solide");
   }
   else if (celsius >=100){
    printf("l etat de l eau est gaz");
   }
   else{
    printf("l etat de l eau est liquide");

   }
   
   
   
    
    return 0;
}