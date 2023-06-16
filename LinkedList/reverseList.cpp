LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
        if (head == NULL||head->next==NULL)
            return head;

        LinkedListNode<int>* nnode = reverseLinkedList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;    // Write your code here
}