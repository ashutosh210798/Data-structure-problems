//Funtion to reverse a linked list
//uploaded by Ashutosh Maheshwari


node* reverseLinkedList(node * head)
{
	node *temp;
	node *curr=head;
	node *prev=NULL;

	while(curr!=NULL)
	{
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	head=prev;
	return head;
	
}
