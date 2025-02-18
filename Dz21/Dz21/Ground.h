#ifndef GROUND_H
#define GROUND_H

#include "IDeliveryStrategy.h"

class GroundDelivery : public IDeliveryStrategy 
{
public:
    float calculateCost(float weight, float distance) const override;
};

#endif // GROUND_H