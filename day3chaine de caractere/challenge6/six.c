#include<stdio.h>


int main(){
    char t[20];
    char s;
    int i,x;
    printf("entrer une chaine de caractere  ");
    gets(t);
    printf("entrer un caractere  ");
    scanf("%c",&s);
    x = 0;
    for(i=0;t[i]!='\0';i++)
        {
        if(t[i]==s)
            x=x+1;
    }
    printf("le nombre d occurence de %c est %d ",s,x);


  return 0;

}
