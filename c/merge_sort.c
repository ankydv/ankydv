#include<stdio.h>

void display(int*,int,int );
void merge_sort(int*,int,int);
void merge(int*,int, int, int);

int main(){
printf("Welcome to Merge Sort Algorithm");
int n,i,arr[100];
printf("\nEnter the size of array : ");
scanf("%d",&n);
printf("\nEnter all the elements of the array\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int* p=arr;
printf("\nInput array : ");
display(p,0,n-1);
merge_sort(p,0,n-1);
printf("\nSorted Array : ");
display(p,0,n-1);

return 0;
}

void display(int* arr,int s,int e){
    for(int i=s;i<=e;i++){
        printf("%d ",arr[i]);
    }
}

void merge_sort(int *arr,int s,int e){
    if(s<e){
        int m=(s+e)/2;
        merge_sort(arr,s,m);
        merge_sort(arr,m+1,e);
        merge(arr,s,m,e);
    }
}

void merge(int *a,int s,int m,int e){
    int n1=m-s+1,
    n2=e-m,
    a1[n1],
    a2[n2],
    i=0,j=0,k=s;
    for(i=0;i<n1;i++){
        a1[i]=a[s+i];
        if(i<=n2)
            a2[i]=a[m+1+i];
    }
    while(i<=n1 && j<=n2){
        if(a1[i]<a2[j]){
            a[k]=a1[i];
            i++;
        }
        else{
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    if(i<=n1){
        while(i<=n1){
            a[k]=a1[i];
            i++,k++;
        }
    }
    else{
        while(j<=n2){
            a[k]=a2[j];
            j++,k++;
        }
    }
}

