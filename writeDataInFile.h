void writeDataInFile(char *fileName) {
    FILE *fp;
    sPerson person;

    if((fp = fopen(fileName,"wb")) == NULL) {
        printf("Error opening file.");
        exit(1);
    }

    printf("Enter number of people:");
    scanf("%d",&people);

    for(int i = 0; i < people; i++) {
        person = inputPerson();

        if(fwrite(&person,sizeof(sPerson),1,fp) != 1) {
            printf("Error writing person in file.");
            exit(2);
        }
    }

    if(fclose(fp) == EOF) {
        printf("Error trying to close file.");
        exit(3);
    }
}
