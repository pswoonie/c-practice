#include <stdio.h>
#include "oop.h"

typedef struct{
    string name;
    int age;
} Person;

typedef struct{
    string country;
    Person person;
} Human;


int main(int argc, char *argv[]) {
    Human human = {"korea", {"andy", 30}}; 
    printString(human.country, human.person.name, human.person.age);

    return 0;
}