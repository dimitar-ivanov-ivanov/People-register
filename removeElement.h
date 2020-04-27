void removeElement(sPerson *person) {
    node_t *ptemp = head;

    if(head == NULL) {
        printf("List empty");
        return;
    }

    int areEqual = comparePeople(&ptemp->person,person);


    //remove head
    if(areEqual) {
        head = head->next;
        return;
    }

    //since we are not removing the head we can safely make the check for the next element in line
    //we check for the next element, because if the current happends to be the one we are looking for we won't be able to rearrange the connections
    //from the previous to the next element

    while(ptemp->next != NULL) {
        areEqual = comparePeople(&ptemp->next->person,person);
        if(areEqual) {
            //we have to remove the next element
            //the current's next element shoud be equal to the next element's next
            ptemp->next = ptemp->next->next;
            break;
        }
        ptemp = ptemp->next;
    }
}
