void getPerson(char name[LEN]) {
    node_t *ptemp = head;
    while(ptemp != NULL) {
        if(!strcmp(ptemp->person.name,name)) {
            printPerson(&ptemp->person);
        }
        ptemp = ptemp->next;
    }
}
