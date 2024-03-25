#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

#define BUFFERSIZE 100

void reset(string mem) {
    fflush(stdin);
    memset(mem, 0, BUFFERSIZE);
}

int main(int argc, char *argv[]) {
    string amount = malloc(BUFFERSIZE);
    string receiver = malloc(BUFFERSIZE);

    Class *account1 = newChild("Andy", 5000);
    Class *account2 = newChild("Jaquine", 2000);
    Class *account3 = newChild("Hoa Hoa", 15000);
    Class *account4 = newChild("Millanio", 23000);

    Class *accountTree[4] = {};

    for (int i=0; i<5; i++) {
        switch(i){
            case 0:
                accountTree[i] = account1;
                // printf("%d | %s | %d \n", accountTree[i]->id, accountTree[i]->name, accountTree[i]->balance);
                break;
            case 1:
                accountTree[i] = account2;
                // printf("%d | %s | %d \n", accountTree[i]->id, accountTree[i]->name, accountTree[i]->balance);
                break;
            case 2:
                accountTree[i] = account3;
                // printf("%d | %s | %d \n", accountTree[i]->id, accountTree[i]->name, accountTree[i]->balance);
                break;
            case 3:
                accountTree[i] = account4;
                // printf("%d | %s | %d \n", accountTree[i]->id, accountTree[i]->name, accountTree[i]->balance);
                break;
            default:
                showAccountBalance(accountTree);
        };
    }

    SPACE;
    fputs("$ MAKE A TRANSFER $ \n", stdout);
    fputs("--ENTER <exit> to TERMINATE \n\n",stdout);

    while(strncmp(receiver, "exit", 4) != 0) {
        // ENTER AMOUNT
        reset(amount);
        fputs(">>> ENTER TRANSFER AMOUNT: ", stdout);
        fgets(amount,sizeof(amount),stdin);

        if (strncmp(amount, "exit", 4) == 0) break;
        if (isNumber(amount) == 0) continue;

        // ENTER RECEIVER
        reset(receiver);
        fputs(">>> ENTER RECEIVER NAME OR ID: ", stdout);
        fgets(receiver,sizeof(receiver),stdin);
        SPACE;

        printf("%s%s\n", amount, receiver);
    }

    free(amount);
    free(receiver);
    free(account1);
    free(account2);
    free(account3);
    free(account4);

    amount = NULL;
    receiver = NULL;
    account1 = NULL;
    account2 = NULL;
    account3 = NULL;
    account4 = NULL;

    return EXIT_SUCCESS;
}