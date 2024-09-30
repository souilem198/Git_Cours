#include<stdio.h>
int a;
void saisir(){
    printf("veuillez entrer un nombre :");
    scanf("%d",&a);
}
void parite(){
    if(a%2==0)
        printf("le nombre %d est pair",a);
    else
        printf("le nombre %d est impair",a);
}
int main(){
    saisir();
    parite();


    return 0;

}
