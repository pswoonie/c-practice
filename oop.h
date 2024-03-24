// This is oop.h header file

#ifndef OOP_H
#define OOP_H

typedef char *string;
typedef struct class Class;

struct class{
    int id;
    string name;
    int balance;    
};

Class *newChild(string);

#endif /* OOP_H */