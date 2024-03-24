#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oop.h"

Class *newChild(string nameParam) {
    Class *child = malloc(sizeof(Class));
    child->id = strlen(nameParam);
    child->name = nameParam;
    child->balance = 0;
    return child;
}