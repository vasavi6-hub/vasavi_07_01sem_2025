#include<stdio.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    if (a%2==0)
{
    printf("The given nuber is even");
}else {
    printf("the given number is odd");
}
return 0;
}