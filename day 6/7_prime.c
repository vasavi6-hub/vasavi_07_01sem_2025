#include<stdio.h>
int main()
{
    int num =0;
    printf("enter a number :");
    scanf("%d",&num );
   int isPrime=0;
   if(num<=1)

{
    isPrime=0;
}
{
  for(int i=2,i<=num/2,i++) 
    if(num%i==0)

{
    isPrime=0;
    break;
}
}
if(isPrime==1)

{
     printf("it is prime number ");
} 
 else { 
    printf("not a prime number");
}
