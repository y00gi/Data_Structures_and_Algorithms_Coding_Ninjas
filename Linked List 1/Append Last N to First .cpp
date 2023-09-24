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
int length(Node *head)
{
	Node* temp = head;
	int len = 0;
	while(temp != NULL)
	{
		len++;
		temp = temp -> next;
	}
	return len;
}

Node *appendLastNToFirst(Node *head, int n)
{
    int len = length(head);
    int size1 = len - n;

    // If n is greater than or equal to the length of the list, return the original list as it is.
    if (size1 <= 0 || n <= 0) {
        return head;
    }

    Node *head1 = head;
    Node *temp = head1;
    int i = 0;

    // Traverse to the (size1-1)th node
    while (i < size1 - 1 && head != NULL) {
        temp = temp->next;
        head = head->next;
        i++;
    }

    Node* head2 = head->next;
    temp->next = NULL;

    // Traverse to the end of the second part of the list
    Node* temp2 = head2;
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }

    // Connect the end of the second part to the beginning of the first part
    temp2->next = head1;

    return head2;
}