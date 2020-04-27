void removeElementAtIndex(int index) {
    node_t *ptemp = head;

    if(head == NULL && index == 1) {
        printf("List empty");
        return;
    } else if(head == NULL && index != 1) {
        printf("Can't rempve at index %d , because the head doesn't exist.",index);
    } else if(head != NULL && index == 1) {
        //remove at the beginning
        head = head->next;
        return;
    }

    index--;
    while(ptemp->next != NULL) {
        index--;
        if(index == 0) {
            ptemp->next = ptemp->next->next;
            return;
        }
        ptemp = ptemp->next;
    }
}
