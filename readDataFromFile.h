void readDataFromFile(char *peopleFileName) {
    FILE *fp;
    sPerson person;

    if((fp = fopen(peopleFileName,"rb")) == NULL) {
        printf("Error trying to open file.");
        exit(4);
    }

    while(!feof(fp)) {
        //can't read another person end loop
        if(fread(&person,sizeof(sPerson),1,fp) != 1) {
            break;
        }
        addElementAtEnd(&person);
    }

    if(fclose(fp) == EOF) {
        printf("Error trying to close file.");
        exit(5);
    }
}
