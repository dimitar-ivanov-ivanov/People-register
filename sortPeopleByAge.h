void sortPeopleByAge() {
    int swapped;
    node_t *ptr1;
    node_t *lptr = NULL;

    if (head == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->person.age > ptr1->next->person.age) {
                sPerson temp = ptr1->person;
                ptr1->person = ptr1->next->person;
                ptr1->next->person = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
