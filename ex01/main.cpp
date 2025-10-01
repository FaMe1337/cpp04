#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "=== Basic Animal Array Test ===" << std::endl;
    const Animal* animals[4];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();

    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();

    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
        delete animals[i];  // should call proper destructors

    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Dog basic;
    basic.getBrain().setIdea(0, "Eat food");
    basic.getBrain().setIdea(1, "Play fetch");

    {
        Dog tmp = basic;  // copy constructor
        std::cout << "tmp idea[0]: " << tmp.getBrain().getIdea(0) << std::endl;
        std::cout << "tmp idea[1]: " << tmp.getBrain().getIdea(1) << std::endl;

        tmp.getBrain().setIdea(0, "Chase the cat");
        std::cout << "tmp idea[0] changed: " << tmp.getBrain().getIdea(0) << std::endl;
        std::cout << "basic idea[0] still: " << basic.getBrain().getIdea(0) << std::endl;
    }

    std::cout << "\n=== Assignment Operator Test ===" << std::endl;
    Dog a;
    Dog b;
    a.getBrain().setIdea(0, "Nap time");
    b = a; // assignment operator
    std::cout << "Dog b idea[0]: " << b.getBrain().getIdea(0) << std::endl;
    a.getBrain().setIdea(0, "Guard the house");
    std::cout << "Dog a idea[0]: " << a.getBrain().getIdea(0) << std::endl;
    std::cout << "Dog b idea[0]: " << b.getBrain().getIdea(0) << std::endl;

    return 0;
}