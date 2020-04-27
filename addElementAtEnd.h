void addElementAtEnd(sPerson *person) {
    node_t * pnewElement = createElement(person);
    node_t * ptemp = head;

    //If list is empty
    if(head == NULL) {
        head = pnewElement;
        return;
    }

    while(ptemp->next != NULL) {
        ptemp = ptemp->next;
    }

    ptemp->next = pnewElement;
}
