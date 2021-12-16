
#include <stdio.h>
#include <conio.h>

int binSearch(int arr[],int key,int ub,int lb);

int main()
{
    int n,key,i=0;
   printf("Enter the number of elements");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements of sorted aray");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search for");
    scanf("%d",&key);
    int index=binSearch(arr,key,0,n-1);
    if(index!=-1)
        printf("The key element is found at index %d",index);
    else
        printf("Element not found");
}

int binSearch(int arr[],int key,int lb,int ub){
    int mid;
    while(lb<ub){
        mid=(lb+ub)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            binSearch(arr,key,lb,mid-1);
        }
        else if(key>arr[mid]){
            binSearch(arr,key,mid+1,ub);
        }
        else{
            return -1;
        }
    }
    
}
