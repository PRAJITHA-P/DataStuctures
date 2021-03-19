#include <stdio.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(rear==N-1)
    {
        printf("QUEUE IS FULL\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    { rear++;
    queue[rear]=x;
     }
}
void dequeue()
{
    if(front==-1&&rear==-1)
{
    printf("UNDERFLOW\n");
    
}
else if(front==rear)
{
    front=rear=-1;
    
}
else
{
    printf("Dequeued element is:%d",queue[front]);
    front++;
}
  }
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("QUEUE IS EMPTY");
        
    }
    else
    {
        for(int i=front;i<rear+1;i++)
        {
            printf("%d\n",queue[i]);
            
        }
    }
}
void top()
{
    if(front==-1&&rear==-1)
    {
        printf("QUEUE EMPTY  ");
        
    } 
    else
    {
    printf("Top element is:%d",queue[front]); 
      }
  }
  void main()
  {
      int opt=0;
      while(opt!=5)
      {
          printf("\n**MAIN MENU***\n");
        printf("\n1.Enqueue\n");
        printf("\n2.Dequeue\n");
        printf("\n3.Display all element\n");
        printf("\n4.Display top element\n");
        printf("\n5.Quit\n");
        printf("\nEnter your option...");
        scanf("%d",&opt);
        switch(opt)
                {
                 case 1:enqueue();
                        break;
                 case 2: dequeue();
                        break;
                 case 3:display();
                        break;
                 case 4:top();
                        break;
                 case 5:break;
                 default:printf("\nWrong option\n");
                 break;
                }
        }
        
      }
  