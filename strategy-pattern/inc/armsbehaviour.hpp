#ifndef ARMSBEHAVIOUR_HPP
#define ARMSBEHAVIOUR_HPP
#include <string>

//behaviour interface
class IArmsBehaviour
{
    public:
        virtual ~IArmsBehaviour() = default;
        virtual std::string attack() = 0;
};

//concrete behaviour
class TentacleArms : public IArmsBehaviour
{
    public:
        std::string attack() override;
};

class ClawArms : public IArmsBehaviour
{
    public:
        std::string attack() override;
};

class PlasticArms : public IArmsBehaviour
{
    public:
        std::string attack() override;
};
#endif
