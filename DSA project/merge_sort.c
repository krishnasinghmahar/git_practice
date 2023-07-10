#include<stdio.h>
void merge(int *ar,int low,int mid,int high){
    int i=low,j=mid+1;
    int k=low;
    int b[100];
    while(i<=mid&&j<=high){
        if(ar[i]<=ar[j])
        b[k++]=ar[i++];
        else
        b[k++]=ar[j++];
    }
    while(i<=mid)
    b[k++]=ar[i++];
    while(j<=high)
    b[k++]=ar[j++];

    for(int i=low;i<=high;i++)
    ar[i]=b[i];
}
void merge_sort(int *ar,int low,int high){
    int mid=(low+high)/2;
    if(low<high){
        merge_sort(ar,low,mid);
    merge_sort(ar,mid+1,high);
    merge(ar,low,mid,high);
    }
}
int main(){
    int ar[]={11,8,7,22,5,4,3,2,1};
    int size=9;
    printf("BEFORE SORT\n");
    for(int i=0;i<size;i++)
    printf("%d ",ar[i]);
    merge_sort(ar,0,size-1);
    printf("\nAFTER SORT\n");
    for(int i=0;i<size;i++)
    printf("%d ",ar[i]);
    return 0;
}