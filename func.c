#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

Class *newChild(string nameParam, int balanceParam) {
    Class *child = malloc(sizeof(Class));
    child->id = strlen(nameParam);
    child->name = nameParam;
    child->balance = balanceParam;
    return child;
}