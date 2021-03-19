#include<stdio.h>
void main()
{
         int a[10][10],i,j,r,c;
         printf("\n enter the rows& columns of martix=");
         scanf("%d%d",&r,&c);
         printf("\n enter the elements=");
         for(i=0;i<r;i++)
         {
            for(j=0;j<c;j++)
               scanf("%d",&a[i][j]);
         }      
         printf("\n matrix is");
         for(i=0;i<r;i++)
          {
               printf("\n");
               for(j=0;j<c;j++)
                   printf("\t%d",a[i][j]);
          }
         printf("\n transpose is");
         for(i=0;i<c;i++)
          {
              printf("\n");
              for(j=0;j<r;j++)
                 printf("\t%d",a[j][i]);
          }  
   
}

