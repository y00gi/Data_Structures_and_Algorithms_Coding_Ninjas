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

Node *skipMdeleteN(Node *head, int M, int N){
    // Write your code here
    if(head == NULL){
        return head;
    }
    if(M == 0){
        return NULL;
    }
    if(N == 0){
        return head;
    }
    Node *temp = head;
    Node *temp1 = head;
    while(temp != NULL){
        int i = 0;
        while(i < M-1 && temp != NULL){
            temp = temp->next;
            i++;
        }
        if(temp == NULL){
            return head;
        }
        temp1 = temp->next;
        i = 0;
        while(i < N && temp1 != NULL){
            Node *temp2 = temp1;
            temp1 = temp1->next;
            delete temp2;
            i++;
        }
        temp->next = temp1;
        temp = temp1;
    }
    return head;
}