#include<stdio.h>
#include<conio.h>

void display(int*,int);
void merge_sort(int*,int,int);
void merge(int*,int,int,int);

int main(){
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
    int *p=arr;
    merge_sort(p,0,n-1);
    printf("\nSorted Array : ");
    display(p,n);
}

void display(int *p,int n){
    int i=0;
    while(i<n){
        printf("%d ",p[i]);
        i++;
    }
}

void merge_sort(int *p,int s,int e){
    if(s<e){
        int m = (s+e)/2;
        merge_sort(p,s,m);
        merge_sort(p,m+1,e);
        merge(p,s,m,e);
        
        
        
        
        
        
    }
}

void merge(int *p,int s, int m , int e){
    int n1 = m-s+1,
    n2 = e-m;
    int a[n1] , b[n2];
    int i = 0, j = 0;
    
    while(i<n1){
        a[i] = p[s+i];
        i++;
    }
    while(j<n2){
        b[j] = p[m+1+j];
        j++;
    }

    i = 0,j=0;
    int k=s;
    
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            p[k] = a[i];
            i++;
        }
        else{
            p[k] = b[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        p[k] = a[i];
        i++;
    }
    while(j<n2){
        p[k] = b[j];
        j++;
    }
    
}
