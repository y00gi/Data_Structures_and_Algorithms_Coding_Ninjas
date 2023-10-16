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
// Function to reverse a linked list without modifying the original list
Node* reverseLinkedList(const Node* head) {
    Node* reversedList = nullptr;

    // Traverse the original list and insert each node at the beginning of the reversed list
    while (head != nullptr) {
        Node* newNode = new Node(head->data);
        newNode->next = reversedList;
        reversedList = newNode;
        head = head->next;
    }

    return reversedList;
}

bool isPalindrome(Node *head)
{
    //Write your code here
	if(head==NULL || head -> next == NULL) return true;

	Node* temp1 = head;
	Node *rev = reverseLinkedList(temp1);

	while(temp1 != NULL)
	{
		if(temp1 -> data != rev -> data) return false;
        temp1 = temp1->next;
        rev = rev->next;
	}

	return true;

}