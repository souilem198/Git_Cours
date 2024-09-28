#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i,u,ui;
    printf("entre n");
    scanf("%d",&n);
    ui=6;
    for(i=1;i<=n;i++){
        u=4*ui+10;
        ui=u;
    }
    printf("u%d=%d",n,u);














    return 0;
}
