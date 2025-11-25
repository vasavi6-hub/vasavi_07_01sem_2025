#include<stdio.h>
int main ()
{ 
    int n,sum=0;

    printf("enter a number=  \n ");
    scanf("%d",&n);
     int i=1;
    while (i<=n)
    {
       sum+=i;
       i++;
    }
    
     printf("sum of digit is : %d \n",sum);
       int a=1;
    while (a<=n)
    {
       printf("%d",a);
       a++;
    }
    
}