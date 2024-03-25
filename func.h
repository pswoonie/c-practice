// This is func.h header file

#ifndef FUNC_H
#define FUNC_H

#define SPACE printf("\n")

typedef char *string;
typedef struct class Class;

struct class{
    int id;
    string name;
    int balance;
    Class *next;
};

Class *newChild(string, int);
void showAccountBalance(Class **);

#endif /* FUNC_H */