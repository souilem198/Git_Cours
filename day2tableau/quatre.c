#include<stdio.h>
int main()

{
    int n,i,max;
    printf("veuillez entrer les nombres elements du tableau :");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++){
        printf("entrer element %d :",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }


    max = T[0];
    for(i=0;i<n;i++){
        if(max<T[i])
            max = T[i];
    }
    printf("le maximum est :%d",max);
    return 0;
}
