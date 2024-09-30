#include<stdio.h>
int a,b,p;
void saisir(){
    printf("veuillez entrer le premier nombre :");
    scanf("%d",&a);
    printf("veuillez entrer le premier nombre :");
    scanf("%d",&b);

}
int multiplication(){
    p=a*b;
    return p;

}
int main(){
    saisir();
    multiplication();
    printf("la multiplication est :%d",p);

}

