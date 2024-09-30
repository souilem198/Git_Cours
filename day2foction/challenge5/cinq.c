#include<stdio.h>
int a,f,i;
void saisir(){
    printf("veuillez entrer un nombre :");
    scanf("%d",&a);

}
int factorielle (){
    f = 1;
    for(i=1;i<=a;i++){
        f = f*i;
    }
    return f;
}
int main(){
    saisir();
    factorielle();
    printf("la factorielle de %d est :%d",a,f);
    return 0;


}



