#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    printf("Elements are ");
    for (i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
void Append(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length]=x;
        arr->length=arr->length+1;
    }
}
void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >=0 && index<=arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index){
    int x=0;
    int i;
    if(index>=0 && index<arr->length-1){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main(){
    struct Array arr = {{2,3,4,5,6},10,5};
//    printf("Enter aize of an array");
//    scanf("%d",&arr.size);
//    arr.A=(int *) malloc(arr.size*sizeof (int));
//    arr.length=0;
//
//    int n,i;
//    printf("Enter the number of elements");
//    scanf("%d",&n);
//
//    printf("Enter all the elements");
//    for(i=0;i<n;i++){
//        scanf("%d",&arr.A[i]);
//    }
//    arr.length=n;
    //Append(&arr,10);
    //Insert(&arr,4,7);
    printf("%d",Delete(&arr,1));
    return 0;
}
