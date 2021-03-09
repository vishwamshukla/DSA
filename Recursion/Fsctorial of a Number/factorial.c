//n!=1x2x3...n
//Time and space complexity id O(n)
#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    printf("%d",fact(5));
    return 0;
}
