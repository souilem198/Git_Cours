#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,s;
    printf("entre la taille \n");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("entrer  elements  %d:",i+1);
        scanf("%d",&tab[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        s=s+tab[i];
    }
    printf("la somme est :%d",s);

}
