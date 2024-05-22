SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *temp=head;
    SinglyLinkedListNode *newnode=new SinglyLinkedListNode(data);
     if (head==nullptr){
        head=newnode;
    }
    else{
    while (temp->next!=nullptr) {
        temp=temp->next;
    }
    temp->next=newnode;
    }
    return head;
}
