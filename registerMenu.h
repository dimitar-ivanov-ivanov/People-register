void registerMenu() {
    int option;
    int index;
    char name[LEN];
    sPerson person;

    printf("Choose option:\n");
    printf("1. Add person\n");
    printf("2. Include at index\n");
    printf("3. Remove person\n");
    printf("4. Remove person at index\n");
    printf("5. Edit person\n");
    printf("6. Person information\n");
    printf("7. Youngest person\n");
    printf("8. Print people\n");
    printf("0. End menu\n");

    while(1) {
        scanf("%d",&option);
        switch (option) {
        case 1:
            person = inputPerson();
            addElementAtEnd(&person);
            break;
        case 2:
            person = inputPerson();
            scanf("%d",&index);
            addElementAtIndex(&person,index);
            break;
        case 3:
            person = inputPerson();
            removeElement(&person);
            break;
        case 4:
            scanf("%d",&index);
            removeElementAtIndex(index);
            break;
        case 5:
            printf("Enter person name:\n");
            scanf("%s",name);
            person = inputPerson();
            editPerson(name,&person);
            break;
        case 6:
            printf("Enter person name:\n");
            scanf("%s",name);
            getPerson(name);
            break;
        case 7:
            sortPeopleByAge();
            printPerson(head);
            break;
        case 8:
            printPeople();
            break;
        case 0:
            return;
        default:
            break;
        }
    }
}
