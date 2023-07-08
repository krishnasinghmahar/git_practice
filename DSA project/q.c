#include<stdio.h>
int partition (int arr[], int low, int high)
    {
       // Your code here
       printf("h\n");
       int pivot=arr[0];
       int start=low+1;
       int end=high;
       do{
           while(arr[start]<=pivot)
           start++;
           while(arr[end]>pivot)
           end--;
           if(start<end){
               int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
           }
       }while(start<end);
       
           int temp=arr[low];
arr[low]=arr[end];
arr[end]=temp;
return end;
    }
void quickSort(int arr[], int low, int high)
    {
        // code here
        int partionindex;
        if(low<high){
            partionindex=partition(arr,low,high);
            quickSort(arr,low,partionindex-1); 
            quickSort(arr,partionindex+1,high);
        }
    }

    
    int main(){
        int ar[]={3,5,1,7,4,9,12,2};
        quickSort(ar,0,7);
        for(int i=0;i<8;i++)
        printf("%d ",ar[i]);
    }