#include<stdio.h>
int main()
{
    int n,f,i;
    printf("entrer le nombre element du tableau :");
    scanf("%d",&n);
    int T_nmb[n];
    for(i=0;i<n;i++){
        printf("element %d :",i+1);
        scanf("%d",&T_nmb[i]);
    }
    printf("facteur de multiplication :");
    scanf("%d",&f);

    for(i=0;i<n;i++){
       f = f*T_nmb[i];
    }
    for(i=0;i<n;i++){
    printf("T_nmb[%d]=%d*%d\n",i,T_nmb[i],f);
    }






    return 0;
}
