#include<stdio.h>
int n,i,m,s,max,min;
int moyenne(){
    m = s/n;
    return m;
    }


int main(){
    printf("veuillez entrer le nombres d etudiant ",n);
    scanf("%d",&n);
    int tab_nomb[n];
    for(i=0;i<n;i++){
    printf("entrer la notes d etudiant num %d :\t",i+1);
    scanf("%d",&tab_nomb[i]);
    }
    s=0;
    for(i=0;i<n;i++){
       s=s+tab_nomb[i];
    }
    moyenne();
    printf("la moyenne est :%d\n",m);
    max = tab_nomb[0];
    for(i=0;i<n;i++){
        if(tab_nomb[i]>max)
            max = tab_nomb[i];
    }



}
