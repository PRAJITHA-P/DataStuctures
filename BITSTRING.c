#include<stdio.h>

void Union(int A1[],int B1[]);
void Intersection(int A1[], int B1[] );
void BitString(int s[]);
void Difference(int A1[], int B1[]);
int A1[5],B1[5],S[5] ,D[5],k=0;
int U[5]={1,2,3,4,5};

int main()
{

  int i=0,j=0;
  int A[]={2,4,5},B[]={1,3,5};
  
  printf("U=");
  for(i=0; i<5; i++)
  {
    printf("%d\t",U[i]);
  } 
  printf("\n");
  
  printf("A=");
  for(i=0; i<3; i++)
  {
    printf("%d\t",A[i]);
  } 
  printf("\n");
 
  printf("B=");
  for(i=0; i<3; i++)
  {
    printf("%d\t",B[i]);
  } 
  printf("\n");
 
  BitString(A); 
   printf("Bitstring of A=");
  for(i=0; i<5; i++)
  {
    printf("%d\t",S[i]);
    A1[i]=S[i];
  } 
  printf("\n");
 
  BitString(B); 
  printf("Bitstring of B=");
  for(i=0; i<5; i++)
  {
    printf("%d\t",S[i]);
    B1[i]=S[i];
  } 
  printf("\n");

  Union(A1,B1);
  Intersection(A1,B1);
  
  printf("A difference B=");
  Difference(A1,B1);
  
  printf("A difference B=");
  for(i=0; i<5;i++) 
   {
     if(D[i]==1)
     {
       printf("%d\t",U[i]);
      }
  }    
  printf("\n");
  
  
  printf("B difference A=");
  Difference(B1,A1);
  
  printf("B difference A=");
  for(i=0; i<5;i++) 
   {
     if(D[i]==1)
     {
       printf("%d\t",U[i]);
      }
  }    
  printf("\n");
    
   
}

void BitString(int S1[])
{ 
   int j=0,i=0;
  
     
      while(i<5)
       {  
          if(U[i]!=S1[j])
          {
            S[i]=0;
            i++;
                      
          }  
             
          else
          {
             S[i]=1;
             i++;
             if(j<3)
       
              j++; 
          }
       }
        
 }  
 
void Union(int A1[], int B1[])
{
   int i,C[5];
   
   printf("A union B=\t");
   for(i=0; i<5;i++) 
   {  
      if(A1[i]==B1[i]==1)
        {
          C[i]=1;
          printf("%d\t",C[i]);
        }  
        
      else  
       {
         C[i]=A1[i]+B1[i];
         printf("%d\t",C[i]);
       }  
   }
   printf("\n");
   
   printf("A union B=\t ");
   for(i=0; i<5;i++) 
   {
     if(C[i]==1)
     {
       printf("%d\t",U[i]);
     }
   }
   printf("\n");    
   
   
}   

void Intersection(int A1[], int B1[])
{
   int i,k=0,C[5];
   
   printf("A intersection B=");
   for(i=0; i<5;i++)
   {
      C[i]=A1[i]*B1[i];
      printf("%d\t",C[i]);
   }
   printf("\n");
   
   printf("A intersection B=");
   for(i=0; i<5;i++) 
   {
     if(C[i]==1)
     {
       printf("%d\t",U[i]);
      
       
      
     }
   }
   printf("\n");    
   
}            
   
void Difference(int A1[],int B1[])
{
   int i=0;
   
   for(i=0;i<5;i++)
   {
     if(A1[i]==B1[i]==1)
     {
       D[i]=0;
     }
     else
     {
       D[i]=A1[i];
     }
   }
   
  for(i=0; i<5; i++)
   {
    printf("%d\t",D[i]);
   } 
  printf("\n");

   
} 
   