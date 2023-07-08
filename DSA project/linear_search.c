#include<stdio.h>
int main(){
    int ar[12]={2,43,15,54,23,67,65,1,4,10,20,39};
    int num,i,flag=0;
    printf("ENTER NUMBER TO BE SEARCHED\n");
    scanf("%d",&num);
    for(i=0;i<12;i++){
        if(ar[i]==num){
            printf("Element found at index : %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Element Not Present");
    return 0;
}