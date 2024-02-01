#include <stdlib.h>
#include <stdio.h>
#include "students.h"

student* createNewStudent(char* name, float note) {
    student* newStud = (student *) malloc(sizeof(student));

    *newStud = (student) {
        name, note
    };

    return newStud;
}

void showStudent(void* studentAsVoid) {
    student* stud = (student *) studentAsVoid;
    printf("> %s", stud->name);
    printf(" | %f\n", stud->note);
}



void deleteStudent(student* student) {};