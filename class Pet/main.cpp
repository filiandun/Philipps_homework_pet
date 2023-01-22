#include <iostream>
#include "pet.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Dog dog("Finn", 8);
    Cat cat("Luna", 4);
    Parrot parrot("Hank", 0.045);

    dog.display();
    cat.display();
    parrot.display();

}
