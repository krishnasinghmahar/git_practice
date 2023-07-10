#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
void printList(struct node *ptr){
    while(ptr!=NULL){
        printf("| %d | -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}
void main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*first=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    struct node*fourth=(struct node*)malloc(sizeof(struct node));
    struct node*fifth=(struct node*)malloc(sizeof(struct node));
    head->data=0;
    first->data=1;
    second->data=2;
    third->data=3;
    fourth->data=4;
    fifth->data=5;
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    printList(head);
}