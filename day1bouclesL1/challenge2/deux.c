#include<stdio.h>
int main()
{
     int n,i,f;
    printf("entrer le nombre :");
    scanf("%d",&n);
    f =1;
    if(n>=0){
    for(i=1;i<=n;i++)
            f =f*i;
        printf("%d",f);
    }
    else
        printf("entre un nombre positif");




    return 0;
}
