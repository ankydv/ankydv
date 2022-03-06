//QuickSort Program by Ankit Yadav 06/03/2022

#include <stdio.h>
void display(int[],int);
void swap(int[],int,int);
int partition(int[],int,int);
void QuickSort(int[],int,int);

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
    
    QuickSort(arr,0,n-1);
    printf("\nSorted Array :: ");
    display(arr,n);

    return 0;
}

void QuickSort(int arr[],int s,int e){
    if(s<e){
        int m = partition(arr,s,e);
        QuickSort(arr,s,m-1);
        QuickSort(arr,m+1,e);
    }
}
    

int partition(int arr[],int s, int e){
    int p = s , i = s , j = e;
    while(1){
        while(arr[i]<=arr[p]){
            i++;
        }
        while(arr[j]>arr[p]){
            j--;
        }
        if(i>=j){
            swap(arr,j,p);
            break;
        }
        else
            swap(arr,i,j);
    }
    return j;
}

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
