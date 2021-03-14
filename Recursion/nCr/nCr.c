//Combination formula nCr = n!/(r! * (n-r)!) -> Time is O(n)
#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    printf("%d", ncr(5,2));
    return 0;
}
