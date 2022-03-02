#include<stdio.h>

void insert(int*,int,int);
void heap_check(int*,int);
void swap(int*,int,int);
void display(int*,int,int);

int main(){
    int n;
    printf("Enter the size of the heap : ");
    scanf("%d",&n);
    int arr[n];
    int* p=arr;
    printf("Enter %d values : ",n);
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        insert(p,v,i);
    }
    printf("\nInput Min Heap : ");
    display(p,0,n-1);
}

void insert(int* a,int v, int i){
    if(i==0)
        a[0]=v;
    else{
        a[i] = v;
        heap_check(a,i);
        }
}

void heap_check(int* a, int i){
    if(i != 0){
        int parent = (i+1)/2-1;
        if(a[parent]>a[i]){
            swap(a,parent,i);
            heap_check(a,parent);
        }
    }
}

void swap(int* a , int x , int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void display(int* arr,int s,int e){
    for(int i=s;i<=e;i++){
        printf("%d ",arr[i]);
    }
}
