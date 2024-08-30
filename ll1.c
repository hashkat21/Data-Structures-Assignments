#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();
struct node
{
    int data;
    struct node *add;
};

struct node *head=NULL,*temp,*new1,*prev,*next;

void main ()
{
    int choice;
   do
    {
    printf("\n================LINKEDLIST===============");
    printf("\n1.Create.");
    printf("\n2.Display.");
    printf("\n3.Insert at first.");
    printf("\n4.Insert at last.");
    printf("\n5.Insert in middle.");
    printf("\n6.Delete at first.");
    printf("\n7.Delete at last.");
    printf("\n8.Delete at middle.");
    printf("\n9.Exit.");
    printf("\n=================END==================");
    printf("\nEnter your choice(1-9):\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        create();
        break;
        case 2 :
        display();
        break;
        case 3 :
        insert_first();
        break;
        case 4 :
        insert_last();
        break;
        case 5 :
        insert_middle();
        case 6 :
        delete_first();
        break;
        case 7 :
        delete_last();
        break;
        case 8 :
        delete_middle();
        break;
        default : 
        printf("You are out of the program....");
    }
    }while(choice!=9);
    
    
}


void create ()
{
    int n;
    int rep;
    printf("Enter an element:\n");
    scanf("%d",&n);
    head=(struct node*)(malloc(sizeof(struct node)));
    head->data=n;
    head->add=NULL;
    temp=head;
    
   printf("Do you Want to continue:\n");
   scanf("%d",&rep);
   // rep means repeat if 1 this it will ask again if anything else it will terminate the loop
      while (rep==1)
    {
        
        printf("\nEnter next Element:\n");
        scanf("%d",&n);
    new1=(struct node*)(malloc(sizeof(struct node)));
    new1->data=n;
    new1->add=NULL;
    temp->add=new1;
    temp=temp->add;
    printf("Want to continue\n");
    scanf("%d",&rep);
    
   }
   
}

void display ()
{
    if(head==NULL)
    printf("XXXXXXXX LIST NOT FOUND xxxxxxxx");
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("\t%d",temp->data);
            temp=temp->add;
        }
    }
}

void insert_first()
{    int num;
    if(head==NULL)
    printf("LIST NOT FOUND");
    else
    {
        printf("Enter the element you want to insert at first:\n");
        scanf("%d",&num);
        new1=(struct node*)malloc(sizeof(struct node));
        new1->data=num;
        new1->add=NULL;
        new1->add=head;
        head=new1;
    }
}


void insert_last()
{
    int num;
    if(head==NULL)
    printf("List not found\n");
    else
    {
    printf("Enter the element you want to insert at last:\n");
    scanf("%d",&num);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=num;
    new1->add=NULL;
    temp=head;
    while(temp->add!=NULL)
    {
        temp=temp->add;
    }
    temp->add=new1;
    }
}


void insert_middle()
{
    int n,pos,i=1;
    if(head==NULL)
    printf("LIst Not found\n");
    else
    {
        printf("Enter the element you want to insert in middle:\n");
        scanf("%d",&n);

        new1=(struct node*)malloc(sizeof(struct node));
        new1->data=n;
        new1->add=NULL;
        printf("Enter the position of the element(node):\n");
        scanf("%d",&pos);
        next=head;
        while(i<pos)
        {
            prev=next;
            next=next->add;
            i++;
        }
        prev->add=new1;
        new1->add=next;
    }
}


void delete_first()
{
    if(head==NULL)
    printf("LIst not found.\n");
    else
    {
        temp=head;
        head=head->add;
        printf("Deleted node is %d", temp->data);
        free(temp);
    }
}

void delete_last()
{
    if(head==NULL)
    printf("List not found.\n");
    else
    {
        temp=head;
        while(temp->add!=NULL)
        {
            prev=temp;
            temp=temp->add;
        }
        prev->add=NULL;
        printf("Deleted node/element is %d", temp->data);
        free(temp);
    }
}


void delete_middle()
{
    int pos,i=1;
    if(head==NULL)
    printf("List not found.\n");
    else
    {
        printf("Enter the position of the node to be deleted:");
        scanf("%d",&pos);
        temp=head;
        while(i<pos)
        {
            prev=temp;
            temp=temp->add;
            i++;
        }
          next=temp->add;
          prev->add=next;
        printf("Deleted Node  is %d", temp->data);
        free(temp);
    }

}