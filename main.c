#include <stdio.h>
#include "lists/listHandler.h" 
#include "students/students.h"

int main() {
    // Flemme de faire la partie 1


    // ================== Structure de données 2 : Liste chaînée ================== //

    int id = 0;

    node* n1 = createNode   (id++, (void *) createNewStudent("Eleve 1", 12.5));
    node* n3 = addLast      (id++, (void *) createNewStudent("Eleve 3", 14.02020), n1);
    node* n2 = addNode      (id++, (void *) createNewStudent("Eleve 2", 2.5), n1);
    

    forAllNode(showStudent, n1);

    deleteAllNodeFrom(n1);

    return 0;
}