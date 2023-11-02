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

Node *reverseLinkedList(Node *head)
{
    //Write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *next = head->next;
    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        if (next != NULL)
        {
            next = next->next;
        }
    }
    return prev;
}