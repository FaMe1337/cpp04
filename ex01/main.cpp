#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "=== Basic Animal Array Test ===" << std::endl;
    const Animal* animals[4];

    for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();	
	}
    std::cout << "\n\n";
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();
     std::cout << "\n\n";
    for (int i = 0; i < 4; i++)
        delete animals[i];
    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    {
		Dog basic;
    	basic.getBrain().setIdea(0, "Eat food");
    	basic.getBrain().setIdea(1, "Play fetch");
        Dog tmp(basic);
		std::cout << "\n";
		std::cout << "basic idea[0] at the beggining:: " << basic.getBrain().getIdea(0) << std::endl;
		std::cout << "basic idea[1] at the beggining:: " << basic.getBrain().getIdea(1) << std::endl;
        std::cout << "tmp idea[0] before change: " << tmp.getBrain().getIdea(0) << std::endl;
        std::cout << "tmp idea[1] before change:: " << tmp.getBrain().getIdea(1) << std::endl;
        tmp.getBrain().setIdea(0, "Chase the cat");
        std::cout << "tmp idea[0] after change: " << tmp.getBrain().getIdea(0) << std::endl;
        std::cout << "basic idea[0] still: " << basic.getBrain().getIdea(0) << std::endl;
		std::cout << "\n";
    }
    std::cout << "\n=== Assignment Operator Test ===" << std::endl;
    Dog a;
    Dog b;
    a.getBrain().setIdea(0, "Nap time");
    b = a;
	std::cout << "\n\n";
	std::cout << "Dog a idea[0] after copy operator assigment: " << a.getBrain().getIdea(0) << std::endl;
    std::cout << "Dog b idea[0] after copy operator assigment: " << b.getBrain().getIdea(0) << std::endl;
	a.getBrain().setIdea(0, "Guard the house");
	std::cout << "\n";
    std::cout << "Dog a idea[0] after changing idea on Dog a: " << a.getBrain().getIdea(0) << std::endl;
    std::cout << "Dog b idea[0] after changing idea on Dog a: " << b.getBrain().getIdea(0) << std::endl;
	 std::cout << "\n\n";
    return 0;
}