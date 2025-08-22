#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    PersonList cp;
    cp.numPeople = pl.numPeople;
    cp.people = pl.people;
    return cp;
}