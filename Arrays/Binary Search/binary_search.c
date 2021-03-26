//Best case is O(1), Worst case is O(log n) and Average case is O(n log n)
#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};

int BinarySearch(struct Array arr, int key){
    int low,mid,high;
    low=0;
    high=arr.length-1;
    while(low <= high){
        mid = (low+high)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    printf("%d",BinarySearch(arr,5));
    return 0;
}
