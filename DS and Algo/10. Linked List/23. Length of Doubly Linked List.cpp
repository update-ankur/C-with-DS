
int DoublyLinkedList::Length(){
    Node *p=First;
    int i=0;
    while(p){
        p=p->next;
        i++;
    }
    return i;
}
