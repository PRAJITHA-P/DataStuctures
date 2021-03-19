#include<stdio.h>
int main()
{
   int a[20],i,s=0,n;
   printf("enter the number of students=");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf("\n enter the mark of student %d=",i);
      scanf("%d",&a[i]);
   }
 
   for(i=1 ;i<=n;i++)
   {
       printf("\n mark of student %d=%d",i,a[i]);
      
   }
    
 
   return 0;
}   
   
