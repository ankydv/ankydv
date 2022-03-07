/******************************************************************************
This program is done by Ankit Yadav. 07/03/2022
*******************************************************************************/
#include <stdio.h>

void display(int p[],int n){
    int i=0;
    while(i<n){
        printf("%d ",p[i]);
        i++;
    }
}

void swap(int a[] , int x , int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void rec_bubble(int arr[],int n){
    if(n == 1)
        return;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1])
            swap(arr,i,i+1);
    }
    rec_bubble(arr,n-1);
}

int main()
{
    int n;
    printf("Enter the size of the aray :: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array :: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    rec_bubble(arr,n);
    printf("\nSorted Array :: ");
    display(arr,n);
    return 0;
}
