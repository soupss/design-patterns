#ifndef LEGSBEHAVIOUR_HPP
#define LEGSBEHAVIOUR_HPP
#include <string>

//behaviour interface
class ILegsBehaviour
{
    public:
        virtual ~ILegsBehaviour() = default;
        virtual std::string move() = 0;
};

//concrete behaviour
class UsainBoltLegs : public ILegsBehaviour
{
    public:
        std::string move() override;
};

class SlugLegs : public ILegsBehaviour
{
    public:
        std::string move() override;
};

class TinyLegs : public ILegsBehaviour
{
    public:
        std::string move() override;
};
#endif
