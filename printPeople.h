void printPeople() {
    node_t * ptemp = head;
    while(ptemp != NULL) {
        printPerson(&ptemp->person);
        ptemp = ptemp->next;
    }
}
