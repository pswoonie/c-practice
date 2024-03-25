#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

Class *newChild(string nameParam, int balanceParam) {
    Class *child = malloc(sizeof(Class));
    child->id = strlen(nameParam);
    child->name = nameParam;
    child->balance = balanceParam;
    child->next = NULL;
    return child;
}

void showAccountBalance(Class **treeParam) {
    SPACE;
    fputs("|   ID   |   NAME   |   BALANCE   \n", stdout);
    fputs("---------------------------------- \n", stdout);
    printf("|    %d   | %s     |  %d   \n", treeParam[0]->id, treeParam[0]->name, treeParam[0]->balance);
    printf("|    %d   | %s  |  %d   \n", treeParam[1]->id, treeParam[1]->name, treeParam[1]->balance);
    printf("|    %d   | %s  |  %d   \n", treeParam[2]->id, treeParam[2]->name, treeParam[2]->balance);
    printf("|    %d   | %s |  %d   \n", treeParam[3]->id, treeParam[3]->name, treeParam[3]->balance);
    SPACE;
}

int getIndex(string input, Class **tree) {

    return 1;
}

void makeTransaction(Class a, Class b) {
    printf("");
}

int isNumber(string str) {
    int isTrue = 1;

    for (int i=0; i<strlen(str)-1;i++) {
        if (str[i] < '0' || str[i] > '9') {
            isTrue = 0;
            break;
        }
    }

    return isTrue; // true: 1 , false: 0
}