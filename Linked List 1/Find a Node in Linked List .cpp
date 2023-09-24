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

int findNode(Node *head, int n){
    // Write your code here.
    int pos = 0;

    Node* temp = head;
    while(temp!=NULL)
    {
        if(n == temp->data) return pos;
        temp = temp -> next;
        pos++;
    }
    return -1;
}