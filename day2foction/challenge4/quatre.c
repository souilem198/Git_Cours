#include<stdio.h>
int a,b,min;
void saisir(){
    printf("veuillez entrer le premier nombre :");
    scanf("%d",&a);
    printf("veuillez entrer le premier nombre :");
    scanf("%d",&b);
}
int maximum(){
    if(a>b)
        min = b;
    else
        min = a;
    return min;

}
int main(){
    saisir();
    maximum();
    printf("la minimum est :%d",min);


    return 0;


}
