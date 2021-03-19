#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head;
void beg_insert()  
{  
    struct node *t,*temp;   
    int item;   
    t= (struct node *)malloc(sizeof(struct node));  
    if(t== NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data:");  
        scanf("%d",&item);  
        t->data = item;  
        if(head == NULL)  
        {  
            head = t;  
            t->next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            temp->next = t;
            t->next=head;
            head = t;  
        }   
        printf("\nnode inserted is%d:");  
    }  
              
}  
void last_insert()  
{  
    struct node *ptr,*tmp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter Node Data:");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            tmp = head;  
            while(tmp -> next != head)  
            {  
                tmp = tmp -> next;  
            }  
            tmp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nnode inserted\n");  
    }  
  
}  
  
void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
}  
void last_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nnode deleted\n");  
  
    }  
}  

void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  
void main ()  
{  
    int opt =0;  
    while(opt != 6)   
    {  
        printf("\n***Main Menu***\n");  
        printf("\nChoose one option from the following list ...\n"); 
        printf("\n1.Insert in begining:\n2.Insert at last:\n3.Delete from Beginning:\n4.Delete from last:\n5.Traverse:\n6.Exit:\n");  
        printf("\nEnter your choice:\n");         
        scanf("\n%d",&opt);  
        switch(opt)  
        {  
            case 1:  
            beg_insert();      
            break;  
            case 2:  
            last_insert();         
            break;  
            case 3:  
            begin_delete();       
            break;  
            case 4:  
            last_delete();        
            break;  
            case 5:  
            display();        
            break;  
            case 6:  
            break;  
            break;  
            default:printf("Please enter valid option..");  
        }  
    }  
}  