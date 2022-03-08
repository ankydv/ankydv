/******************************************************************************

Selection Sort algorithm by Ankit Yadav 08/03/2022

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

void select_sort(int arr[],int n){
    if(n == 1)
        return;
    int i,max = n-1;
    for(i = n-1; i >= 0; i--){
        if(arr[i] > arr[max])
            max = i;
    }
    if(max!=n-1)
        swap(arr,max,n-1);
    select_sort(arr,n-1);
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements of the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nInput Array : ");
    display(arr,n);
    
    select_sort(arr,n);
    printf("\nSorted Array :: ");
    display(arr,n);

    return 0;
}
