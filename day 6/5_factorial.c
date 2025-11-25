 #include<stdio.h>
 int main()
  {   
        int num=0,res=1;
        printf("enter a nnumber : ");
       scanf("%d",&num);
      while(num>=1)
    {
      res =res *num;
      num--;
    }
  printf("factoril is:%d \n",res);  

}        