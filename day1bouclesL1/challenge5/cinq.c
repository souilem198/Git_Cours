#include<stdio.h>
int main()

{
    int a,e,s,i;
    printf("veuillez entrer un nombre :");
    scanf("%d",&a);
    printf("veuillez entrer un exposant :");
    scanf("%d",&e);
    s =1;
    i =1;
    while(i<=e){
        s = s*a;
        i++;
    }
    printf("resulta est :%d",s);



    return 0;
}
