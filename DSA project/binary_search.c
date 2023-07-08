#include<stdio.h>
int binary_search(int *ar,int size,int key){
    int start=0;
    int end=size-1;
    int index=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(ar[mid]==key)
        {
            index=mid;
            break;
        }
        else if(ar[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return index;
}
int main(){
    int ar[12]={2,43,15,54,23,67,65,1,4,10,20,39};
    int num;
    printf("ENTER NUMBER TO BE SEARCHED\n");
    scanf("%d",&num);
    int index=binary_search(ar,12,num);
    if(index>=0)
    printf("Element found at index : %d",index);
    else
    printf("Element Not Present");
    return 0;
}