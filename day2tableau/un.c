#include<stdio.h>
int main()
{
    int T[5]={1,2,3,4};
    int i;

    T[4]=5;
    for(i=0;i<5;i++){
        printf("T[%d]=%d\n",i,T[i]);


    }


    return 0;
}
