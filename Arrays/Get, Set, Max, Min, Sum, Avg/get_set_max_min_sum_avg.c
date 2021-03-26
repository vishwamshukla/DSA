#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};
int Get(struct Array arr, int index){
    if(index >=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}
void Set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index] = x;
    }
}
int Max(struct Array arr){
    int i, max=arr.A[0];
    for(i=1;i<arr.length;i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
}
int Min(struct Array arr){
    int i, min=arr.A[0];
    for(i=1;i<arr.length;i++){
        if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    return min;
}
int Sum(struct Array arr){
    int sum=0,i;
    for(i=0;i<arr.length;i++){
        sum = sum+arr.A[i];
    }
    return sum;
}
float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

int main(){
    struct Array arr={{1,2,3,4,80},10,5};
    //printf("%d",Get(arr,2));
    printf("%f",Avg(arr));
    return 0;
}
