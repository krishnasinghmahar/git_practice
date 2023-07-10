#include<stdio.h>
void insertionSort(int*ar,int size){
    int i=1;
    int j;
    for(i=1;i<size;i++){
        int temp=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>temp){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
}
int main(){
    int ar[]={9,8,7,6,5,4,3,2,1};
    int size=9;
    printf("BEFORE SORT\n");
    for(int i=0;i<size;i++)
    printf("%d ",ar[i]);
    insertionSort(ar,size);
    printf("\nAFTER SORT\n");
    for(int i=0;i<size;i++)
    printf("%d ",ar[i]);
    return 0;
}