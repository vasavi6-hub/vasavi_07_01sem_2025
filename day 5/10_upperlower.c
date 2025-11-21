#include<stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("enter a character =");
    scanf("%c",ch);
    
      if (ch>=65 && ch<=90)
    {
        printf("entered character is a upper case");
    }
    else
    {
      printf("it is a lowercase ");
    }
 
}
