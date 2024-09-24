#include<stdio.h>

int main() 
{
    
   float km_par_h,m_par_s;
   printf("veuillez entrer la vitesse en km/h :");
   scanf("%f",&km_par_h);
   m_par_s = km_par_h*0.27778;
   printf("la vitesse en m/s est :%.2f",m_par_s);

    return 0;

}