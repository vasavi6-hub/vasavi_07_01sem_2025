#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next ;  
};
struct node *head,*newNode ,*tail;
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
    tail=newNode;
}
else 
{
    tail ->next =newNode;
    tail =newNode;

}
newNode->next=head;
printf("do you need to continue or not(0/1)= ");
scanf("%d",&ch);
}

printf("elements :  \n");
tail = head;
while(tail-> next!=head)
{
    printf("%d ",tail-> data);
    tail=tail->next;

}
printf("%d",tail->data);
printf("\n");
return 0;
}
