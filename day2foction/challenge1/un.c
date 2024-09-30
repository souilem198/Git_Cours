#include<stdio.h>
int a,b,s;
void saisir(){
     printf("veuillez entrer le premier nombre :");
     scanf("%d",&a);
      printf("veuillez entrer le deuxieme  nombre :");
     scanf("%d",&b);

}
int somme(){

    s=a+b;
    return s;

}
int main(){

    saisir();
    somme();
    printf("la somme est :%d",s);

    return 0;
}
