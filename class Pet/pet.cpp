#include "pet.h"


Pet::Pet()
{
	std::cout << "PET CONSTRUCTOR" << std::endl;
}

void Pet::display()
{
	std::cout << "���: " << this->name << std::endl << "���: " << this->weigth << std::endl << std::endl;
}



Dog::Dog(std::string name, double weigth)
{
	this->name = name;
	this->weigth = weigth;
}

Cat::Cat(std::string name, double weigth)
{
	this->name = name;
	this->weigth = weigth;
}

Parrot::Parrot(std::string name, double weigth)
{
	this->name = name;
	this->weigth = weigth;
}