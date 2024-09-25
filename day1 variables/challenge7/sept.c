#include<stdio.h>
int main()
{
    int nombre1, nombre2, nombre3, moyenne;
    printf("entrer le nombre 1 :");
    scanf("%d",&nombre1);
    printf("entrer le nombre 2 :");
    scanf("%d",&nombre2);
    printf("entrer le nombre 3");
    scanf("%d",&nombre3);
    moyenne = (nombre1*2)+(nombre2*3)+(nombre3*5)/2+3+5;
    printf("la moyenne :%d",moyenne);

    return 0;
}

