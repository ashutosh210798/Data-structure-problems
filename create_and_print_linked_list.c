//uploaded by Ashutosh Maheshwari.

#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
  int data;
  struct Node* next;
}node;

  node* head=NULL;

  node* createlinkedlist(int);

  void printLinkedList(node * );


node* createlinkedlist(int length_of_list)
{
   int i,x;

   node *temp,*newnode ;

   for(i=0;i<length_of_list;i++)
   {
	    printf("enter data\n");
	    scanf("%d",&x);
	    newnode= (node*)malloc(sizeof(node));
   
	   if(head==NULL)
	   {
	   
		   newnode->data=x;
		   newnode->next=NULL;
		   head=newnode;
		   temp=head;
   
	  }
	  else
	  {
	   
	 
		   newnode->data=x;
		   newnode->next=NULL;
		   temp->next=newnode;
		   temp=newnode;

          } 

  }

  return head;

}



void printLinkedList(node * head)
{
	 node*temp=head;
	 printf("The linked list is");
	 while(temp!=NULL)
	 {
		  printf("%d\n",temp->data);
		  temp=temp->next;
	 } 
}


int main()
{
	 int n;

	 printf("How many numbers you want to enter in linked list?");
	 scanf("%d",&n);
	 createlinkedlist(n);

	 printLinkedList( head);
 

}

