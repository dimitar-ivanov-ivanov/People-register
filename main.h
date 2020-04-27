#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 30
int people;

typedef struct person {
    char name[LEN];
    char gender[LEN];
    char job[LEN];
    char id[LEN];
    int age;
} sPerson;


typedef struct node {
    sPerson person;
    struct node* next;
} node_t;

node_t * head = NULL;

void writeDataInFile(char *fileName);
void readDataFromFile(char *fileName);
void printPerson(sPerson *person);
sPerson inputPerson();
void addElementAtEnd(sPerson *person);
void addElementAtIndex(sPerson *person,int index);
void removeElement(sPerson *person);
node_t * createElement(sPerson *person);
void registerMenu();
void printPeople();
int comparePeople(sPerson *person1,sPerson *person2);
void removeElementAtIndex(int index);
void getPerson(char name[LEN]);
void editPerson(char name[LEN],sPerson *person);
void sortPeopleByAge();
