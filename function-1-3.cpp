#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList cp;
    cp.numPeople = pl.numPeople;
    if (pl.numPeople > 0 && pl.people){
        cp.people = new Person[pl.numPeople];
        for (int i = 0; i < pl.numPeople; ++i){
            cp.people[i] = pl.people[i];
        }
    } else {
        cp.people = nullptr;
    }
    return cp;
}