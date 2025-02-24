#ifndef EXPRESS_H
#define EXPRESS_H

#include "IDeliveryStrategy.h"

class ExpressDelivery : public IDeliveryStrategy {
public:
    float calculateCost(float weight, float distance) const override;
};

#endif // EXPRESS_H