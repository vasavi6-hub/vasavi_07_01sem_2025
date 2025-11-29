#include<stdio.h>
int stack[100];
int top=-1;
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("enter your choice =  \n");
        printf("1. push \n");
        printf("2. pop \n");
        printf("3. display \n");
        printf("4. exit \n");
        scanf("%d",&choice);
        switch (choice){
            case1 : push();
            break;
            case2 : pop();
            break;
            case3 : display();
            break;
            case4 : return 0;
            break;
           default:printf("invalid choice!!!! \n");

           
        }
    }
}
void push()
{
    if (top>=100)
{
    printf("stack is full");
}
else {
    int n;
    printf("enter a element : \n");
    scanf("%d",&n);
    top++;
    stack[top]=n;
    printf("%d element is pushed \n",n);

}
}
void pop()
{
    if (top ==-1)
    {
        printf("stack is empty \n");

    } else {
        printf("element poped is : %d \n" ,stack[top]);
        top--;

    }
}
void display()
{
    if (top==-1)
    {
        printf("stack is empty \n");

    } else{
        for (int i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
 printf("\n");
   }
}