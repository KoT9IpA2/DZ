#ifndef IDELIVERYSTRATEGY_H
#define IDELIVERYSTRATEGY_H

class IDeliveryStrategy 
{
public:
    virtual ~IDeliveryStrategy() = default;
    virtual float calculateCost(float weight, float distance) const = 0;
};

#endif // IDELIVERYSTRATEGY_H