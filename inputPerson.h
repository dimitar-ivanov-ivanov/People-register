sPerson inputPerson() {
    sPerson person;
    fflush(stdin);

    //get input and if gender is incorrect loop again, otherwise end loop
    while(1) {
        printf("Enter person information:\n");
        scanf("%s %s %s %s %d",person.name,person.gender,person.id,person.job,&person.age);
        /*
         printf("Enter name:");
         gets(person.name);

         printf("Enter gender:");
         gets(pGender);

         printf("Enter ID:");
         gets(person.id);

         printf("Enter job:");
         gets(person.job);

         printf("Enter age:");
         scanf("%d",&person.age);
         printf("------------------------------------------------------\n");*/

        if(strcmp(person.gender,"Male") && strcmp(person.gender,"Female")) {
            printf("Please input correct gender\n");
            continue;
        }
        break;

    }

    return person;
}
