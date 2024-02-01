#ifndef STUDENT
#define STUDENT

typedef struct studentsStruct {
    char* name;
    float note;
} student ;

student* createNewStudent(char* name, float note);
void     showStudent(void*);
void     deleteStudent(student*);

#endif