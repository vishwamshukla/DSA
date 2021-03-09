#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int loop(int n){
    int i;
    int s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main(){
    printf("%d",sum(3));
    printf("%d",loop(3));
    return 0;
}
