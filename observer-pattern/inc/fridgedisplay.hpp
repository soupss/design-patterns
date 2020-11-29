#ifndef FRIDGEDISPLAY_HPP
#define FRIDGEDISPLAY_HPP
#include "iobserver.hpp"
#include "weatherstation.hpp"

class FridgeDisplay : public IObserver
{
    public:
        FridgeDisplay(WeatherStation* _station);
        void update() override;
    private:
        WeatherStation* station;
};
#endif
