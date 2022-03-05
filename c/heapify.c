
#include <stdio.h>

void cbtToHeap(int[],int);
void heapify(int[],int,int);
void swap(int[],int,int);
void display(int[],int);

int main()
{
    int n;
    printf("Enter the size of the tree :: ");
    scanf("%d",&n);
    int heap[n];
    printf("\nEnter the elements of tree :: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&heap[i]);
    }
    printf("\nInput tree :: ");
    display(heap,n);
    cbtToHeap(heap,n);
    printf("\nMax Heap :: ");
    display(heap,n);

    return 0;
}

void cbtToHeap(int heap[],int n){
    for(int i = n/2+1; i >= 0; i--){
        heapify(heap,i,n);
    }
}

void heapify(int heap[],int i,int n){
    int max = i,
    lchild = 2*i+1,
    rchild = 2*i+2;
    if(lchild<n && heap[lchild]>heap[max])
        max = lchild;
    if(rchild<n && heap[rchild]>heap[max])
        max = rchild;
    if(max!=i){
        swap(heap,i,max);
        heapify(heap,max,n);
    }
}

void swap(int a[] , int x , int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
