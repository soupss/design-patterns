#ifndef PHONEDISPLAY_HPP
#define PHONEDISPLAY_HPP
#include "iobserver.hpp"
#include "weatherstation.hpp"

class PhoneDisplay : public IObserver
{
    public:
        PhoneDisplay(WeatherStation* _station);
        void update() override;
    private:
        WeatherStation* station;
};
#endif
