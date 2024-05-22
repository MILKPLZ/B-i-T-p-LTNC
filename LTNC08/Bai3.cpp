SinglyLinkedListNode * insertNodeAtHead(
        SinglyLinkedListNode * _head
    ,   int _data
){
    auto newHead = new SinglyLinkedListNode(_data);
    newHead->next = _head;
    return newHead;
}
