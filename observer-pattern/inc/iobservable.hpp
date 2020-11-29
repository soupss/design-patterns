#ifndef IOBSERVABLE_HPP
#define IOBSERVABLE_HPP
#include "iobserver.hpp"

class IObservable
{
    public:
        virtual ~IObservable() = default;
        virtual void registerObserver(IObserver* _observer) = 0;
        virtual void unregisterObserver(IObserver* _observer) = 0;
        virtual void notify() = 0;
};
#endif
