void addElementAtIndex(sPerson *person,int index) {
    node_t * pnewElement = createElement(person);
    node_t * ptemp = head;

    //add at the beginning
    if(head == NULL && index == 1) {
        head = pnewElement;
        return;
    } else if(head == NULL && index != 1) {
        printf("Can't add at index %d , because the head doesn't exist.",index);
        return;
    } else if(head != NULL && index == 1) {
        //insert at the beginning
        pnewElement->next = head;
        head = pnewElement;
        return;
    }

    //decrease the index with one before starting because for example if we want to place it at index 2 we need to stop at index 1
    index--;
    while(ptemp != NULL) {
        index--;
        //if index is 0 we have found the right place
        if(index == 0) {
            node_t * pnext = ptemp->next;
            ptemp->next = pnewElement;
            pnewElement->next = pnext;
        }
        ptemp = ptemp->next;
    }
}
