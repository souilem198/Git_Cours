#include<stdio.h>
#include<math.h>
int main()

{
    int x1,x2,y1,y2,z1,z2,distance;
    printf("entrer le nombre x1 et x2 :");
    scanf("%d %d",&x1,&x2);
    printf("entrer le nombre y1 et y2 :");
    scanf("%d %d",&y1,&y2);
    printf("entrer le nombre z1 et z2 :");
    scanf("%d %d",&z1,&z2);
    distance = sqrt(pow((x2-x1),2)+ pow((y2-y1),2)+pow((z2-z1),2));
    printf("la distance est : %d",distance);

    return 0;
}
