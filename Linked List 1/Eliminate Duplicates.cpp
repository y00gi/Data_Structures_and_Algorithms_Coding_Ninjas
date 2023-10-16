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

Node *removeDuplicates(Node *head)
{
    //Write your code here
    if(head == NULL) return head;
    
    Node *pre = head;
    Node *nxt = head->next;

    while(pre != NULL && nxt != NULL)
    {
        if(pre->data == nxt->data)
        {
            pre->next = nxt->next;
            nxt = nxt->next;
        }
        else
        {
            pre = pre->next;
            nxt = nxt->next;
        }
    }
    
    return head;
}