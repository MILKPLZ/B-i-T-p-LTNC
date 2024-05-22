Node* removeDuplicates(Node *head)
{
    //Write your code here
    Node *current = head;
    while(current){
        if(current->next != NULL){
            Node *nextNode = current->next;
                if(current->data == nextNode->data){
                    current->next = nextNode->next;
                    nextNode->next = NULL;
                    delete nextNode;
                    continue;
                }
        }
        current = current->next;
   }

    return head;
}
