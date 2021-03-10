
/*Fibonacci Series(Recursive, Iterative and memoization).Memoization is the technique to store results of the function calls so that they can be used
to utilze again when we need the same call to avoid excessive calls(O(n) instead of O(2^n) of normal recurisve function))*/

#include<stdio.h>
int fibRecursive(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibRecursive(n-2)+fibRecursive(n-1);
    }
}
int fibIterative(int n){
    int i,t1=0,t2=1,t3;
    if(n<=1){
        return n;
    }
    else{
        for(i=2;i<=n;i++){
            t3 = t1+t2;
            t1=t2;
            t2=t3;
        }
        return t3;
    }
}
int fibMemoization(int n){
    int f[10];
    int i;
    for(i=0;i<10;i++){
        f[i]=-1;
    }
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1){
            f[n-2]=fibMemoization(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=fibMemoization(n-1);
        }
        return f[n-2]+f[n-1];
    }
}
int main(){
    printf("%d",fibRecursive(5));
    printf("%d",fibIterative(5));
    printf("%d",fibMemoization(5));
    return 0;
}
