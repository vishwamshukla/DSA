//Best case is O(1), worst case is O(n) and Average case is O(n).
#include<stdio.h>
#include<stdlib.h>
struct Array {
    int A[10];
    int size;
    int length;
};
int linear(struct Array arr){
    int value;
    int i;
    printf("Enter the value to find in the array");
    scanf("%d",&value);
    for(i=0;i<arr.length;i++){
        if(arr.A[i]==value){
            return i;
        }
    }
    return 0;
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    printf("%d",linear(arr));
    return 0;
}
