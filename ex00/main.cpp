#include "Animal_hpp"
#include "Cat_hpp"
#include "Dog_hpp"
#include "WrongAnimal_hpp"
#include "WrongCat_hpp"
#include "WrongDog_hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n\n";
	const WrongAnimal* test = new WrongAnimal();
	const WrongAnimal* wd = new	WrongDog();
	const WrongAnimal* wc = new WrongCat();
	std::cout << wd->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	wd->makeSound();
	wc->makeSound();
	test->makeSound();
}