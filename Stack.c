#include <stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;

void push()
{
    int x;
    printf("Enter the element:");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("OVERFLOW");
        
    }
    
    else {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        x=stack[top];
        top--;
        printf("Poped element is:%d",x);
    }
}
void top_ele()
{
    if(top==-1)
    {
        printf("Stack is empty..");
    }
    else{
        printf("%d",stack[top]);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {  
        printf("ELEMENTS:\n");
        printf("%d\n",stack[i]);
    }
}

void main()
{
    int opt=0;
    while(opt!=5)
    {
        printf("\n**MAIN MENU***\n");
        printf("\n1.Push\n");
        printf("\n2.Pop\n");
        printf("\n3.Display the top element\n");
        printf("\n4.Display all stack elements\n");
        printf("\n5.Quit\n");
        printf("\nEnter your option...");
        scanf("%d",&opt);
        switch(opt)
                {
                 case 1:push();
                        break;
                 case 2: pop();
                        break;
                 case 3:top_ele();
                        break;
                 case 4:display();
                        break;
                 case 5:break;
                 default:printf("\nWrong option\n");
                 break;
                }
        }
        
    }