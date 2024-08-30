#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct employ
{
	char name[20];
	int age, salary;
	char address[30];
	struct employ *next;
	
}employ;

employ *head=NULL, *tail=NULL;

employ* create_ll(char name[],int age, int salary, char address[])
{
   employ *temp;
   temp=(employ*)malloc(sizeof(employ));
   if (temp==NULL)
      {
       printf("memory alocation failed");
       return NULL;
      }
      strcpy(temp->name,name);
      temp->age=age;
      temp->salary=salary;
      strcpy(temp->address,address);
	  temp->next=NULL;
   
   if (head==NULL)
   {
     head= temp;
     tail=temp;   	
   }
   else 
   {
   	tail->next=temp;
   	tail=temp;
   	
   }
   return temp;
}

void show()
{
	employ *trvs;
	trvs=head;
	while(trvs!=NULL)
	{
		printf("%s %d %d %s\n",trvs->name, trvs->age, trvs->salary, trvs->address);
		trvs=trvs->next;
	}
	
}

int main()
{
	create_ll("John Doe", 30, 50000, "123 Main St");
    create_ll("Jane Smith", 25, 45000, "456 Elm St");
    
    show();
	return 0;
}
