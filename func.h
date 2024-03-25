// This is func.h header file

#ifndef FUNC_H
#define FUNC_H

typedef char *string;
typedef struct class Class;

struct class{
    int id;
    string name;
    int balance;    
};

Class *newChild(string);

#endif /* FUNC_H */