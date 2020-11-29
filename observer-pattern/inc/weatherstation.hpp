#ifndef WEATHERSTATION_HPP
#define WEATHERSTATION_HPP
#include <vector>
#include "iobservable.hpp"
#include "iobserver.hpp"

class WeatherStation : public IObservable
{
    public:
        void registerObserver(IObserver* _observer) override;
        void unregisterObserver(IObserver* _observer) override;
        void notify() override;
        inline void setTemperature(int _temperature) {this->temperature = _temperature;}
        inline int getTemperature() const {return this->temperature;}
    private:
        int temperature;
        std::vector<IObserver*> observers;
};
#endif
