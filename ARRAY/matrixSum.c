#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],c[10][10] ,r1,c1,r2,c2,i,j;
  printf("enter the no of rows&columns of matrix1=");
  scanf("%d%d",&r1,&c1);
  printf("enter the no of rows&columns of matrix2=");
  scanf("%d%d",&r2,&c2);
  printf("enter the elements of matrix1=");
  for(i=0;i<r1;i++)
  {
     for(j=0;j<c1;j++)
     {
        scanf("%d",&a[i][j]);
     }
  }
  printf("enter the elements of matrix2=");
  for(i=0;i<r2;i++)
  {
     for(j=0;j<c2;j++)
     {
        scanf("%d",&b[i][j]);
     }
  }
  if(r1==r2 && c1==c2)
  {
     printf("sum of matrix is=\n");
     for(i=0;i<r2;i++)
        {
          for(j=0;j<c2;j++)
             {
               c[i][j]=a[i][j]+b[i][j];
               printf("%d \t",c[i][j]);
             }
             printf("\n");
         }    
   }
   return 0;
}   
 
