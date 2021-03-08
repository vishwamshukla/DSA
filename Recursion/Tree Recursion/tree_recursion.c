//If a function calling itself more than one time then the type of recursion is Tree recursion. 
// Time Complexity - O(2^n) and Space Complexity - O(n)
#include <stdio.h>
void fun(int n){
    if(n>0){
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    fun(3);
    return 0;
}
