#include <iostream>
#include "weatherstation.hpp"
#include "phonedisplay.hpp"
#include "fridgedisplay.hpp"

int main()
{
    WeatherStation* station = new WeatherStation();
    PhoneDisplay* pDisplay = new PhoneDisplay(station);
    FridgeDisplay* fDisplay = new FridgeDisplay(station);

    station->registerObserver(pDisplay);
    station->registerObserver(fDisplay);

    int temp;
    while(true)
    {
        std::cout << "temp: ";
        std::cin >> temp;
        station->setTemperature(temp);
        station->notify();
    }


    delete station;
    delete pDisplay;
}
