#ifndef AIR_H
#define AIR_H

#include "IDeliveryStrategy.h"

class AirDelivery : public IDeliveryStrategy 
{
public:
    float calculateCost(float weight, float distance) const override;
};

#endif // AIR_H