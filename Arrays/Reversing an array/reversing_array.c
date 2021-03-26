//Reversing an array by taking a extra array and by swapping elements
#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};
void Reverse(struct Array *arr){
    int *B;
    int i,j;

    B = (int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j] = arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}
void ReversebySwapping(struct Array *arr){
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        temp=arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j]=temp;
    }
}
void Display(struct Array arr){
    int i;
    printf("Elements are ");
    for (i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
int main(){
    struct Array arr={{1,2,3,4,80},10,5};
    ReversebySwapping(&arr);
    Display(arr);
    return 0;
}
