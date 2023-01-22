#pragma once
#include <iostream>

class Pet
{
public:
	Pet();

protected:
	std::string name;
	double weigth;

public:
	void display();

};


class Dog : public Pet
{
public:
	Dog(std::string name, double weigth);

};


class Cat : public Pet
{
public:
	Cat(std::string name, double weigth);

};


class Parrot : public Pet
{
public:
	Parrot(std::string name, double weigth);

};
