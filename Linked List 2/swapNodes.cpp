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

Node *swapNodes(Node *head, int i, int j)
{
    //Write your code here
    if (i == j)
    {
        return head;
    }
    Node *temp = head;
    Node *prev1 = NULL;
    Node *prev2 = NULL;
    Node *curr1 = NULL;
    Node *curr2 = NULL;
    int count = 0;
    while (temp != NULL)
    {
        if (count == i)
        {
            curr1 = temp;
        }
        if (count == j)
        {
            curr2 = temp;
        }
        if (count == i - 1)
        {
            prev1 = temp;
        }
        if (count == j - 1)
        {
            prev2 = temp;
        }
        temp = temp->next;
        count++;
    }
    if (prev1 != NULL)
    {
        prev1->next = curr2;
    }
    else
    {
        head = curr2;
    }
    if (prev2 != NULL)
    {
        prev2->next = curr1;
    }
    else
    {
        head = curr1;
    }
    Node *temp1 = curr2->next;
    curr2->next = curr1->next;
    curr1->next = temp1;
    return head;
}