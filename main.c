#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

#define BUFFERSIZE 100

int main(int argc, char *argv[]) {
    string input = malloc(BUFFERSIZE);

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

    



    // fputs("\n--ENTER <exit> to TERMINATE \n\n",stdout);

    // while(strncmp(input, "exit", 4) != 0) {
    //     fflush(stdin);
    //     memset(input, 0, BUFFERSIZE);
    //     fgets(input,sizeof(input),stdin);
    //     fputs(input, stdout);
    // }

    free(input);
    free(account1);
    free(account2);
    free(account3);
    free(account4);

    input = NULL;
    account1 = NULL;
    account2 = NULL;
    account3 = NULL;
    account4 = NULL;

    return 0;
}