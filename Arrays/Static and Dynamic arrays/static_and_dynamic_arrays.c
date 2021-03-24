#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[5]={1,2,3,4,5};
    int *p;
    int i;

    p=(int *)malloc(5*sizeof(int ));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for(i=0;i<5;i++){
        printf("%d",A[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d",p[i]);
    }
    return 0;
}
