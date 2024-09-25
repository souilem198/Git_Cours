#include<stdio.h>
int main()
{
    float yards,km;
    printf("veuillez entrer la distance en km :");
    scanf("%f",&km);
    yards = km*1093.61;
    printf("la distance en yards est :%.2f",yards);


    return 0;
}