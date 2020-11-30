#ifndef SUPERHERO_HPP
#define SUPERHERO_HPP
#include "armsbehaviour.hpp"
#include "legsbehaviour.hpp"

class Superhero
{
    public:
        Superhero(IArmsBehaviour* _arms, ILegsBehaviour* _legs);
        ~Superhero();
        void attack();
        void move();
    private:
        IArmsBehaviour* arms;
        ILegsBehaviour* legs;
};
#endif
