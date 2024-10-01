#include<stdio.h>
int n,i,s,m,choix,max,min,x,y;
int tab_nomb[5];
int moyenne(){
    m = s/n;
    return m;
}
int maximum(){
    max = tab_nomb[0];
    for(i=1;i<5;i++){
        if(max < tab_nomb[i])
        max = tab_nomb[i];
    }
    return max;
}
void note_superieur(){
    for(i=0;i<5;i++){
        if(tab_nomb[i]>m)
        printf("les notes superieure a la moyenne sont :%d\n",tab_nomb[i]);
    }
}
void valide(){
    x = 0;
    for(i=0;i<5;i++){
        if(tab_nomb[i]>=12)
        x = x+1;
    }
    printf("le nombres d etudiants ayont valide est :%d\n",x);
}
void rattrapage(){
    y = 0;
    for(i=0;i<5;i++){
        if(tab_nomb[i]<12)
        y = y+1;
    }
    printf("le nombres d etudiants en rattrapage est :%d\n",y);
}
int minimum(){
    min = tab_nomb[0];
    for(i=1;i<n;i++){
        if(min>tab_nomb[i])
        min = tab_nomb[i];
    }
      return min;
}

int main(){
    printf("les nombres etudiants sont :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("entrer la notes d etudiant num %d :\t",i+1);
        scanf("%d",&tab_nomb[i]);
    }
    s=0;
    for(i=0;i<n;i++){
       s=s+tab_nomb[i];
    }
    printf("1 moyenne \n");
    printf("2 la notes plus elevee\n");
    printf("3 note plus basse \n");
    printf("4 les notes superieure a la moyenne \n");
    printf("5 le nombres d etudiants ayont valide \n");
    printf("6 le nombres d etudiants en rattrapage \n");

    printf("entrer votre choix :");
    scanf("%d",&choix);
    switch(choix){
        case 1:
        moyenne();
        printf("la moyenne est :%d\n",m);
        break;
        case 2:
        maximum();
        printf("la notes plus elevee est :%d\n",max);
        break;
        case 3:
        minimum();
        printf("note plus basse est :%d\n",min);
        break;
        case 4:
        moyenne();
        note_superieur();
        break;
        case 5:
        valide();
        break;
        case 6:
        rattrapage();
        break;
        default : printf("au revoir !");
        break;

    }
   return 0;
}
