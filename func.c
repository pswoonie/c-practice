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
    printf("|    %d   | %s   |  %d   \n", treeParam[1]->id, treeParam[1]->name, treeParam[1]->balance);
    printf("|    %d   | %s  |  %d <- THIS IS YOU  \n", treeParam[2]->id, treeParam[2]->name, treeParam[2]->balance);
    printf("|    %d   | %s |  %d   \n", treeParam[3]->id, treeParam[3]->name, treeParam[3]->balance);
    SPACE;
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

Class *makeTransaction(string amountParam, string receiverParam, Class **tree, int arrLength) {
    int amount, index;

    if(sscanf(amountParam, "%d", &amount) == EOF) {
        perror("[ERROR][func.c][LINE 42]");
        exit(EXIT_FAILURE);
    }

    Class *receiver = NULL, *self = tree[2];

    switch(isNumber(receiverParam)) { // true: 1 , false: 0
        case 1: {
            int rid;

            if(sscanf(receiverParam, "%d", &rid) == EOF) {
                perror("[ERROR][func.c][LINE 52]");
                exit(EXIT_FAILURE);
            }

            for (int i=0;i<arrLength;i++) {
                if (tree[i]->id == rid) {
                    index = i;
                    receiver = tree[i];
                    break;
                }
            }
            
            if (receiver == NULL) {
                perror("[ERROR][func.c][LINE 65]");
                exit(EXIT_FAILURE);
            }

            self->balance -= amount;
            receiver->balance += amount;
            tree[2] = self;
            tree[index] = receiver;
            break;
        }
        default: {
            for (int i=0; i<arrLength;i++) {
                printf("%s: %lu | %s: %lu\n", receiverParam, strlen(receiverParam), tree[i]->name, strlen(tree[i]->name));
                if (strncmp(receiverParam, tree[i]->name, strlen(tree[i]->name)) == 0) {
                    index = i;
                    receiver = tree[i];
                    break;
                }
            }

            if (receiver == NULL) {
                perror("[ERROR][func.c][LINE 85]");
                exit(EXIT_FAILURE);
            }

            self->balance -= amount;
            receiver->balance += amount;
            tree[2] = self;
            tree[index] = receiver;
        }
    }
    return *tree;
}