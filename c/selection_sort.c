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
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr,min,i);
    }
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
