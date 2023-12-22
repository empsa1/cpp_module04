#include "../includes/Animal.cpp"
#include "../includes/Dog.cpp"
#include "../includes/Cat.cpp"
#include <iostream>

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return 0;
}