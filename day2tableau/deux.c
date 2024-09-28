#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n;
    printf("entre la taille \n");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("entrer  elements  %d:",i);
        scanf("%d",&tab[i]);
    }

    for(i=0;i<n;i++){
        printf("tab[%d]=%d\n",i,tab[i]);
    }


    return 0;
}
