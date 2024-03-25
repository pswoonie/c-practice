#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

#define BUFFERSIZE 100

int main(int argc, char *argv[]) {
    string input = malloc(BUFFERSIZE);

    Class *account1 = newChild("Andy");
    Class *account2 = newChild("Jaquine");
    Class *account3 = newChild("Hoa Hoa");
    Class *account4 = newChild("Millanio");

    fputs("|   ID   |   NAME   |   BALANCE   \n", stdout);
    fputs("----------------------------------", stdout);
    printf("|    %d   | %s     | %d   \n", account1->id, account1->name, account1->balance);
    printf("|    %d   | %s  | %d   \n", account2->id, account2->name, account2->balance);
    printf("|    %d   | %s  | %d   \n", account3->id, account3->name, account3->balance);
    printf("|    %d   | %s | %d   \n", account4->id, account4->name, account4->balance);
    fputs("\n--ENTER <exit> to TERMINATE \n\n",stdout);

    while(strncmp(input, "exit", 4) != 0) {
        fflush(stdin);
        memset(input, 0, BUFFERSIZE);
        fgets(input,sizeof(input),stdin);
        fputs(input, stdout);
    }

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