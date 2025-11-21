#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number=  ");
    scanf("%d",&n);
     int a=1;
    do
    {
       printf("%d",a);
       a++;
    }while (a<=n);
}
