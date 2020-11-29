#include <iostream>
#include "fridgedisplay.hpp"

FridgeDisplay::FridgeDisplay(WeatherStation* _station)
{
    this->station = _station;
}

void FridgeDisplay::update()
{
    std::cout << "fridge display: " << this->station->getTemperature() << std::endl;
}
