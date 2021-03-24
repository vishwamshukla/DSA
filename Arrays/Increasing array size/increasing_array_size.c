#include<stdio.h>
#include<stdlib.h>
int main(){

    int *p,*q;
    p=(int *)malloc(2*sizeof (int));
    p[0]=1;p[1]=2;
    q=(int *)malloc(4*sizeof (int ));
    for(int i=0;i<3;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<5;i++){
        printf("%d",p[i]);
    }
    return 0;
}
