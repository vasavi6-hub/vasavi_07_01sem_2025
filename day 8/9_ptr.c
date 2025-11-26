#include<stdio.h>
#include<string.h>
struct student
{
    char name [30];
    int roll_num;
    int marks;
}
st1,st2;
int main() 
{
 strcpy(st1.name ,"murali");
st1.marks=12;
st1.roll_num=101;
printf("student details = \n");
printf("name=%s\n",st1.name);
printf("marks =%d \n",st1.marks);
printf("roll no =  %d \n",st1.roll_num);


 strcpy(st2.name ,"Jayashree");
st2.marks=20;
st2.roll_num=120;
printf("student details = \n");
printf("name=%s\n",st2.name);
printf("marks =%d \n",st2.marks);
printf("roll no =  %d \n",st2.roll_num);
}
