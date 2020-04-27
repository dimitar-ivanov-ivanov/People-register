int comparePeople(sPerson *person1,sPerson *person2) {
    if(strcmp(person1->name,person2->name)) {
        return 0;
    }
    if(strcmp(person1->gender,person2->gender)) {
        return 0;
    }
    if(strcmp(person1->id,person2->id)) {
        return 0;
    }
    if(strcmp(person1->job,person2->job)) {
        return 0;
    }
    if(person1->age != person2->age) {
        return 0;
    }

    return 1;
}
