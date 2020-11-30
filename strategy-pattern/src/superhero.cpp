#include <iostream>
#include "superhero.hpp"

Superhero::Superhero(IArmsBehaviour* _arms, ILegsBehaviour* _legs)
    :arms(_arms), legs(_legs)
{ }

Superhero::~Superhero()
{
    delete this->arms;
    delete this->legs;
}

void Superhero::attack()
{
    std::cout << this->arms->attack() << std::endl;
}

void Superhero::move()
{
    std::cout << this->legs->move() << std::endl;
}
