#include<stdio.h>
int main()
{

     int a,b,c,m;
     printf("entrer le nombre a :");
     scanf("%d",&a);
     printf("entrer le nombre b");
     scanf("%d",&b);
     printf("entrer le nombre c");
     scanf("%d",&c);
     m = (a*b*c)^(1/3);
     printf("moyenne geometrique est :%d",m);

     return 0;
}
