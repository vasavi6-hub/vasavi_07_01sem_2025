#include<stdio.h>
int main()
{ int min=0,arr[5];
       printf("enter the values: ");
       for ( int i=0;i<5;i++){
        scanf("%d",&arr[i]);
 } min=arr[0];
       for(int i=0;i<5;i++)
       { if(arr[i]<min) {
             min=arr[i];
         
        } }
       
         printf("value is : %d ",min );
    }
    