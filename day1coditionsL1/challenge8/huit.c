#include<stdio.h>
int main()

{
    char a;
    printf("entrer un alphabet :");
    scanf("%c",&a);
    if(a>='A' &&a <='Z')
        printf("correct");
    else
        printf("entrer autre alphabet");

    return 0;
}
