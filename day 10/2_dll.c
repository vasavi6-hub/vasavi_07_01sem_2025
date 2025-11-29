#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next ;
    struct node *prev;  
};
struct node *head,*newNode ,*curr;
int main() {
head = NULL;
int ch=1;
while(ch)
{
newNode = (struct node*)malloc(sizeof (struct node));
printf("eneter a number :");
scanf("%d",&newNode -> data);
newNode->next =NULL;
if(head==NULL)
{
    head = newNode ;
    curr=newNode;
}
else 
{
    curr ->next =newNode;
    newNode->prev=curr;
    curr =newNode;

}
printf("do you need to continue or not(0/1)= ");
scanf("%d",&ch);
}

printf("elements : \n");
curr = head;
while(curr!=NULL)
{
    printf("%d",curr-> data);
    curr=curr->next;

}
printf("\n");
return 0;
}
