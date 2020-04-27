void editPerson(char name[LEN],sPerson *person) {
    node_t *ptemp = head;

    while(ptemp != NULL){
        if(!strcmp(ptemp->person.name,name)){
           ptemp->person = *person;
           break;
        }
        ptemp = ptemp->next;
    }
}
