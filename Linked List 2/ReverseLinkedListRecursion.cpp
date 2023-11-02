
Node *reverseLinkedListRec(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *smallAns = reverseLinkedListRec(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return smallAns;
}