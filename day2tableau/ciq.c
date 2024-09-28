#include<stdio.h>
int main()
{
    int n,i,min;
    printf("veuillez entrer le nombre elements du tableau :");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++){
        printf("element %d :",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        printf("T[%d] = %d\n",i,T[i]);
    }
    min = T[0];
    for(i=0;i<n;i++){
        if(min>T[i])
            min = T[i];
    }
    printf("le minimum est :%d\n",min);






    return 0;
}
