#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("veuillez entrer quartre chiffre : ");
    scanf("%d",&e);
    a = e/1000;
    b = e/100-(a*10);
    c = e/10-(a*100)-(b*10);
    d = e%10;
    printf("%d%d%d%d",d,c,b,a);



    return 0;
}
