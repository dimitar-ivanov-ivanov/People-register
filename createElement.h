node_t * createElement(sPerson *person) {
    node_t * tempP = (node_t *)malloc(sizeof(node_t));
    if(tempP == NULL) {
        printf("Error!");
        exit(6);
    }

    tempP->next = NULL;
    tempP->person = *person;

    return tempP;
}
