#include<stdio.h>
#include<string.h>


int main(){
    char m1[20];
    char m2[20];
    printf("entrer le mot1 ");
    gets(m1);
    printf("entrer le mot2 ");
    gets(m2);
    int test;
    test = strcmp(m1,m2);
    if(test==0)
        printf("les mots sont identiqes");
    else
        printf("les mots sont differents");



  return 0;
}
