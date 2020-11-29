#include <iostream>
#include "phonedisplay.hpp"

PhoneDisplay::PhoneDisplay(WeatherStation* _station)
{
    this->station = _station;
}

void PhoneDisplay::update()
{
    std::cout << "phone display: " << this->station->getTemperature() << std::endl;
}
