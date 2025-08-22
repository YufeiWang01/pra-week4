#include <iostream>
#include "Person.h"

Person* createPersonArray(int n);

int main() {
    int n = 3;
    Person* people = createPersonArray(n);
    for (int i = 0; i < n; ++i){
        std::cout << i << " " << people[i].name << " " << people[i].age << std::endl;
    }
    delete[] people;
    return 0;
}