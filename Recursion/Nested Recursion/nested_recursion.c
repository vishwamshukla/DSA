//A Recursive function which will pass paramter as a recursive call. 
#include <stdio.h>

int fun(int n){
    if (n > 100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}
int main(){

    int r;
    r = fun(95);
    printf("%d",fun(r));
    return 0;
}
