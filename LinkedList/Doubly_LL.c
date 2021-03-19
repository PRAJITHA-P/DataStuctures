#include <stdio.h>

#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}struct node *head;
void insert_beg()
{ int item;
printf("enter the element:");
scanf("%d",&item);
struct node *t=(struct node*)malloc(sizeof(struct node));
if(t==NULL)
{printf("\nOVERFLOW");
}
else
{
    if(head==NULL)
    { t->next=NULL;
      t->prev=NULL;
      t->data=item;
      head=t;
      }
    else
    {
        t->data=item;
        t->next=head;
        t->prev=NULL;
        head->prev=t;
        head=t;
        
    }
    printf("INSERTED\n");
      }
         }
void insert_last()
{
    struct node *t,*temp;
 int item;
t=(struct node*)malloc(sizeof(struct node));
if(t==NULL)
{
    printf("\nOVERFLOW");
  } 
  else  
{  
       printf("\nEnter value");  
       scanf("%d",&item);  
        t->data=item;  
       if(head == NULL)  
       {  
           t->next = NULL;  
           t->prev = NULL;  
           head = t;  
       }  
else
{
    temp=head;
    while(temp->next!=NULL)
    { temp=temp->next;
      }
      temp->next=t;
      t->next=NULL;
      t->prev=temp;
      t->data=item;
        }
        printf("INSERTED");
      }
        }
void insert_at_pos()
{
    struct node *temp,*t;
    int i,pos,item;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
       printf("\nOVERFLOW");
    }
    else
    {
        temp=head;
        printf("enter position");
        scanf("%d",&pos);
        printf("enter data to insert\n");
        scanf("%d",&item);
        for(i=2;i<=pos;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            { printf("INVALID POSITION\n");
            return;
        } 
         }
        t->data=item;
        t->next=temp->next;
        t->prev=temp;
        temp->next=t;
        temp->next->prev=t;
        printf("INSERTED");
    }
}
    void delete_beg()
    {
        struct node *t;
        int n;
        if(head==NULL)
        {
            printf("UNDERFLOW\n");
            return;
        }
          else
            {  
           n=head->data;
           t=head;
           head=head->next;
           head->prev=NULL;
           free(t);
           printf("DELETED ELEMENT IS : %d\n",n);
           return;
        }
    }
    void delete_end()
    {
        struct node *t;
        int n;
        if(head==NULL)
        {
            printf("UNDERFLOW\n");
            return;
        }
              else
              {   
                  
                  t=head;
                  while(t->next!=NULL)
                  {  
                      t=t->next;
                  }
                  
                 n=t->data;
                 t=t->prev;
                  t->next=NULL;
                  free(t);
                  printf("DELETED ELEMENT IS %d\n",n);
                  return;
              }
         }
         void delete_pos()
         {
             struct node *t,*p;
             int i,n,pos;
             printf("Enter the position: ");
             scanf("%d",&pos);
             if(head==NULL)
             {
                 printf("UNDERFLOW\n");
                 return;
             }
             for(i=2;i<=pos;i++)
             { 
                 if(p->next==NULL)
                      { printf("INVALID POSITION");
                     return;
                      } 
                      else
                         { 
                             n=t->data;
                       t=p->next;
                       p->next=t->next;
                       t->next->prev=p;
                       free(t);
                       printf("deteled element is%d\n",n);
                       return; }
                       }
                      
                  }
                 
              void display()
     {
	struct node *t;
	if(head==NULL)
	{
		printf("Linked List is empty!!!\n\n");
		return;
	}
	printf("Elements are: ");
	t=head;
	while(t->next!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}
	printf("%d---> ",t->data);
	printf("NULL");
	printf("\n\n");
                  }
         
void main()
{
    int opt=0;
    
    do
    { printf("\nMain Menu\n");  
        printf("\nChoose one option from the following list ...\n");    
        printf("\n1.Insert in begining:\n2.Insert at last:\n3.Insert at any random location:\n4.Delete first:\n5.Delete end:\n6.Delete at pos:\n7.Display elements:\n8.Exit:\n");
        printf("\nEnter your option:");  
        scanf("%d",&opt);
        switch(opt)  
        {  
            case 1:  insert_beg();  
            break;  
            case 2:  insert_last();  
            break;  
            case 3:  insert_at_pos();  
            break;
            case 4:  delete_beg();
            break;
            case 5:  delete_end();
            break;
            case 6:  delete_pos();
            break;
            case 7:  display();
            break;
            case 8: break;
            default: printf("Please enter valid choice..");
            break;
        }  
    } 
    while(opt!=8); 
}