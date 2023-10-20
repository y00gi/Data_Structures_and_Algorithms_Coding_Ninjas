/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here

	if (head1 == NULL) return head2;
	if (head2 == NULL) return head1;

	Node *NewHead = NULL;
	Node *NewTail = NULL;

	if(head1->data < head2->data)
	{
		NewHead = head1;
		NewTail = head1;
		head1 = head1->next;
	}
	else
	{
		NewHead = head2;
		NewTail = head2;
		head2 = head2->next;
	}

	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data < head2->data)
		{
			NewTail->next = head1;
			head1 = head1->next;
		}
		else
		{
			NewTail->next = head2;
			head2 = head2->next;
		}
		NewTail = NewTail->next;
	}

	if(head1!=NULL)
	{
		NewTail->next = head1;
	}
	if(head2!=NULL)
	{
		NewTail->next = head2;
	}

	return NewHead;

}