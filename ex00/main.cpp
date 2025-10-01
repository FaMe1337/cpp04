#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n\n";
	std::cout << "Animal j is " << j->getType() << " and he does ";
	j->makeSound();
	std::cout << "\n";
	std::cout << "Animal i is " << i->getType() << " and he does ";
	i->makeSound();
	std::cout << "\n";
	std::cout << "Animal meta is " << meta->getType() << " and he does ";
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << "\n\n";
	const WrongAnimal* test = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << "\n\n";
	std::cout << "Animal wc is " << wc->getType() << " and he ";
	wc->makeSound();
	std::cout << "\n";
	std::cout << "Animal test is " << test->getType() << " and he ";
	test->makeSound();
	std::cout << "\n";
	delete test;
	delete wc;
}