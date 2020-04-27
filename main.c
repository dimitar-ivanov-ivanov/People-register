#include "main.h"
#include "editPerson.h"
#include "writeDataInFile.h"
#include "readDataFromFile.h"
#include "inputPerson.h"
#include "registerMenu.h"
#include "addElementAtEnd.h"
#include "addElementAtIndex.h"
#include "createElement.h"
#include "removeElement.h"
#include "removeElementAtIndex.h"
#include "getPerson.h"
#include "printPeople.h"
#include "printPerson.h"
#include "comparePeople.h"
#include "sortPeopleByAge.h"
#include "swap.h"

int main() {
    char peopleFileName[] = "people.txt";
    writeDataInFile(peopleFileName);
    readDataFromFile(peopleFileName);
    registerMenu();
    return 0;
}

