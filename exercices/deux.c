#include<stdio.h>
int main()
{
    int n,i,x;
    printf(" etrer le nombre element du tableau ");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("t[%d]=",i);
        scanf("%d",&t[i]);
    }
    printf("les element du tableau :\n");
    for(i=0;i<n;i++){
        printf("%d\t",t[i]);
    }
    //************************************************************
    for(i=0;i<n;i++)
 {
            for(int j=i+1;j<n;i++)
    {
                    if(t[i]>t[j])
                    {
                    x = t[i];
                    t[i]=t[j];
                    t[j]=x;


                    }


    }

 }
    printf("donc le tri de tableau est :\n");
    for(int i=0;i<n;i++)
        printf("%d\t",t[i]);


    return 0;

}
