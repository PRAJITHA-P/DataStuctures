#include<stdio.h>
int main()
{
   int a[10],i,s=0;
   printf("enter 10 numbers in to array=");
   for(i=0;i<10;i++)
   {
      scanf("%d",&a[i]);
   }
 
   for(i=0;i<10;i++)
   {
     s=s+a[i];
     
   }
   printf("sum=%d",s);
   return 0;
}   
   
