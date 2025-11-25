#include<stdio.h>
int main()
{
    int num,dup,rev=0,digit=0;
    printf("enter a number:   " );
    scanf("%d",&num);
    dup = num;
    while (num!=0)
    {
        digit =num %10;
        rev =rev*10+digit;
        num=num/10;
    }
    if (dup == rev)
    {
        printf("palindrome number  \n");
    }
    else
    {
        printf("not palincdrone number \n");

    }
}