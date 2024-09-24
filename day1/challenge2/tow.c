#include<stdio.h>

int main()

{
    float celsius,kelvin;
    printf("veuillez entrer la temperature en celsius : \n");
    scanf("%f",&celsius);
    kelvin = celsius+273.15;
    printf("la temperature en kelvin est :%.2f",kelvin);




    return 0;
}