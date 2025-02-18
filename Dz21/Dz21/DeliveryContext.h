#ifndef DELIVERYCONTEXT_H
#define DELIVERYCONTEXT_H

#include "IDeliveryStrategy.h"

class DeliveryContext 
{
private:
    IDeliveryStrategy* strategy;
public:
    DeliveryContext(IDeliveryStrategy* strategy);
    void setStrategy(IDeliveryStrategy* newStrategy);
    float calculateDeliveryCost(float weight, float distance) const;
};

#endif // DELIVERYCONTEXT_H