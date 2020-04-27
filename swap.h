void swapNodes(node_t *a,node_t *b){
    sPerson temp = a->person;
    a->person = b->person;
    b->person = temp;
}
