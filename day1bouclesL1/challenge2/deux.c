#include<stdio.h>
int main()
{
    int n,i,s;
    printf("veuillez entre un nombre :");
    scanf("%d",&n);
    s=1;
    for(i=1;i<=n;i++){
        s=s*i;
    }
    printf("factorielle du nombre entrer :%d",s);




    return 0;
}
