#include<stdio.h>

int main(){
    char t[100];
    int i;
    printf("veuillez saisir une chaine :");
    gets(t);
    for(i=0;t[i]!='\0';i++){
            printf("%c", t[i]);
    }
    printf("nombre totale de caractere est :%d",i);





  return 0;


}
