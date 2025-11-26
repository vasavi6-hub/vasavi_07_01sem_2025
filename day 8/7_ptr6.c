#include<stdio.h>
int main()
{
    
    int a = 10 ,b =20,temp;
    printf("before swapping = \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping = \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}