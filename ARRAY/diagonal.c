#include<stdio.h>
void main()
{
    int a[10][10],i,j,o;
    printf("enter the order of the matrix=");
    scanf("%d",&o);
    printf("enter the elements =");
    for(i=0;i<o;i++)
    {
       for(j=0;j<o;j++)
       {
          scanf("%d",&a[i][j]);
       }
    }      
    for(i=0;i<o;i++)
    {
        printf("\n");
        for(j=0;j<o;j++)
           printf("\t%d",a[i][j]);
    }
    printf("\n the diagonal elements are=");
    for(i=0;i<o;i++)
        printf("\n%d",a[i][i]);
}
