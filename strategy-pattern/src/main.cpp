#include <iostream>
#include "armsbehaviour.hpp"
#include "legsbehaviour.hpp"
#include "superhero.hpp"


int main()
{
    //deleted in Superhero::~Superhero
    //arms
    TentacleArms* tentacleArms = new TentacleArms();
    ClawArms* clawArms = new ClawArms();
    PlasticArms* plasticArms = new PlasticArms();
    //legs
    UsainBoltLegs* usainBoltLegs = new UsainBoltLegs();
    SlugLegs* slugLegs = new SlugLegs();
    TinyLegs* tinyLegs = new TinyLegs();

    Superhero bob(tentacleArms, usainBoltLegs);
    std::cout << "Bob\n";
    bob.attack();
    bob.move();

    Superhero joe(clawArms, slugLegs);
    std::cout << "\nJoe\n";
    joe.attack();
    joe.move();

    Superhero batman(plasticArms, tinyLegs);
    std::cout << "\nBatman\n";
    batman.attack();
    batman.move();
}
