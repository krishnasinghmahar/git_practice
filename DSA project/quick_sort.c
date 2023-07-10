#include<stdio.h>
int partition(int *ar,int low,int high){
    int pivot=ar[low];
    int i=low;
    int j=high;
    while(i<j){
        while(ar[i]<=pivot && i<=high-1)
        i++;
        while(ar[j]>pivot && j>=low+1)
        j--;
        if(i<j)
        {   //swaping
            int t=ar[i];
            ar[i]=ar[j];
            ar[j]=t;
        }
    }
    int t=ar[low];//swaping
    ar[low]=ar[j];
    ar[j]=t;
    return j;
}
int qs(int*ar,int low,int high){
    if(low<high){
        int partitionIndex=partition(ar,low,high);
        qs(ar,low,partitionIndex-1);
        qs(ar,partitionIndex+1,high);
    }
}
void main(){
    int ar[]={15,5,24,8,1,3,16,10,20},size=9;;
    printf("Quick Sort :- \n BEFORE SORT\n");
    for(int i=0;i<size;i++) printf("%d ",ar[i]);
    qs(ar,0,size-1);
    printf("\nAFTER SORT\n");
    for(int i=0;i<size;i++) 
    printf("%d ",ar[i]);
}