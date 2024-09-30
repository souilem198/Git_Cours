#include<stdio.h>
int a,b,max;
void saisir(){
    printf("veuillez entrer le premier nombre :");
    scanf("%d",&a);
    printf("veuillez entrer le premier nombre :");
    scanf("%d",&b);
}
int maximum(){
    if(a>b)
        max = a;
    else
        max = b;
    return max;

}
int main(){
    saisir();
    maximum();
    printf("la maximum est :%d",max);



    return 0;


}
