#include <stdio.h>
#include<stdlib.h>
int count=0;
struct Node *start=NULL;
struct Node
{
	int data;
	struct Node *next;
};
void insert_at_begin()
{ int x;
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	count++;
	printf("Enter the insert value: ");
			scanf("%d",&x);
			printf("\n");
	if(start==NULL)
	{
		start=t;
		start->data=x;
		start->next=NULL;
		return ;
	}
	t->data=x;
	t->next=start;
	start=t;
}
void insert_at_end()
{int x;
	struct Node *t,*temp;
	t=(struct Node*)malloc(sizeof(struct Node));
	count++;
	printf("Enter the insert value: ");
			scanf("%d",&x);
			printf("\n");
	if(start==NULL)
	{
		start=t;
		start->data=x;
		start->next=NULL;
		return;
	}
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=t;
	t->data=x;
	t->next=NULL;
}
void insert_at_bet()
{ int i, x,pos;
    struct Node *t ,*temp;
    t=(struct Node*)malloc(sizeof(struct Node));
    count++;
    printf("Enter the insert value: ");
			scanf("%d",&x);
			printf("\n");
			printf("ENTER POS:");
			scanf("%d",&pos);
				printf("\n");
    if(t==NULL)
    {
        printf("unable to allocate memry");
    }
    else
    {
        t->data=x;
        t->next=NULL;
        
        temp=start;
        for(i=2;i<=pos;i++)
        {
            temp=temp->next;
            if(temp==NULL)
             break;
        }
             if(temp!=NULL)
             {
                 t->next=temp->next;
                 temp->next=t;
                 printf("DATA INSERTED\n");
             }
             else
             {
                 printf("unable to insert\n");
             }
             }
        }
        void delete_from_beg()
        {
            struct Node *t;
            int n;
            if(start==NULL)
            {
                printf("unable to delete\n");
                return;
            }
            else
            {
                n=start->data;
                t=start->next;
                free(start);
                start=t;
                count--;
                printf("Deleted element is:%d\n\n",n);
                return;
            }
        }
        void delete_frm_end()
        {
            struct Node *t, *temp ;
            int n;
            if(start==NULL)
            {
                printf("list is empty\n");
                return;
            }count--;
           if(start->next==NULL)
           { n=start->data;
           free(start);
           start=NULL;
           printf("deleted element is \n\n%d",n);
           return;
           }
           t = start;
           while(t->next!=NULL)
           {
               temp=t;
               t=t->next;
           }
           n=t->data;
           temp->next=NULL;
           free(t);
           printf("deleted elemt is\n\n%d",n);
           return;
           }
              void delete_at_pos()
              { struct Node *t,*p;
                  int pos,i,n;
                  printf("enter the pos to delete");
                  scanf("%d",&pos);
                  for(i=2;i<=pos;i++)
                  {
                      if(p->next==NULL)
                      { printf("INVALID POSITION");
                     return;
                      } count--; 
                      t=p->next;
                      n=t->data;
                      p->next=t->next;
                      free(t);
                      printf("detelet element is%d\n",n);
                       }
                      
                  }
                  void display()
     {
	struct Node *t;
	if(start==NULL)
	{
		printf("Linked List is empty!!!\n\n");
		return;
	}
	printf("No of elements: %d\n",count);
	printf("Elements are: ");
	t=start;
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
                      {
                          printf("---LINKED LIST PROGRAMS---\n");
		printf("1. INSERT AT BEGINING\n");
		printf("2. INSERT AT END\n");
		printf("3.INSERT IN BETWEEN\n");
		printf("4. DELETE FROM BEGINING\n");
		printf("5. DELETE FROM END\n");
		printf("6. DELETE FROM BETWEEN\n");
		printf("7. DISPLAY LIST\n");
		printf("8. EXIT\n\n");
		printf("Enter your option: ");
		scanf("%d",&opt);
		switch(opt)
		{
         case 1: insert_at_begin();
         break;
		    case 2: insert_at_end();
		    break;
		    case 3: insert_at_bet();
		    break;
		    case 4: delete_from_beg();
		    break;
		    case 5: delete_frm_end();
		    break;
		    case 6: delete_at_pos();
		    break;
		    case 7: display();
		    break;
		    case 8: break;
		    default:printf("WRONG OPTION\n");
		    break;
		}
		
		}
                      
        while(opt!=8);
              
                  }
              