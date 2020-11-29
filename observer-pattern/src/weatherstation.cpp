#include "weatherstation.hpp"

void WeatherStation::registerObserver(IObserver* _observer)
{
    this->observers.push_back(_observer);
}

void WeatherStation::unregisterObserver(IObserver* _observer)
{
    //remove
}

void WeatherStation::notify()
{
    for(IObserver* observer : this->observers)
    {
        observer->update();
    }
}
