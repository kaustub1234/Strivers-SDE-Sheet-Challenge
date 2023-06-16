Node* removeKthNode(Node* head, int K)
{
        Node * start = new Node();
        start -> next = head;
        Node* fast = start;
        Node* slow = start;     

        for(int i = 1; i <= K; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
}
