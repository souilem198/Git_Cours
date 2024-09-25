#include<stdio.h>
int main()
{
    char caractere;
    printf("veuillez entrer un caractere : ");
    scanf("%c",&caractere);
    switch(caractere){
        case'e':printf("voyelle");
        break;
        case'a':printf("voyelle");
        break;
        case'u':printf("voyelle");
        break;
        case'i':printf("voyelle");
        break;
        case'o':printf("voyelle");
        break;
        default : printf("entrer autre caractere");
        break;

    }
    return 0;
}
