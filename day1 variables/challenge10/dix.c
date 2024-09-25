#include<stdio.h>
int main()
{
  int rayon,volume;
  const float pi = 3.14;
  printf("entrer la valeur du rayon :");
  scanf("%d",&rayon);
  volume = (4/3)*pi*rayon*rayon*rayon;
  printf("le volume du sphere est :%d",volume);

  return 0;
}
