#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

int main(){
    int n = 3;
    PersonList src;
    src.numPeople = n;
    src.people = new Person[n];
    for (int i = 0; i < n; ++i){
        src.people[i].name = "Bob";
        src.people[i].age = 30 + i;
    }

    PersonList dst = shallowCopyPersonList(src);

    src.people[0].name = "Changed";
    src.people[0].age = 99;

    for (int i = 0; i < dst.numPeople; ++i){
        std::cout << i << " " << dst.people[i].name
                  << " " << dst.people[i].age << std::endl;
    }

    delete[] src.people;
    dst.people = nullptr;
    return 0;
}