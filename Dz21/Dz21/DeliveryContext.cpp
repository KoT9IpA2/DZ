#include "DeliveryContext.h"

DeliveryContext::DeliveryContext(IDeliveryStrategy* strategy) : strategy(strategy) {}

void DeliveryContext::setStrategy(IDeliveryStrategy* newStrategy) 
{
    strategy = newStrategy;
}

float DeliveryContext::calculateDeliveryCost(float weight, float distance) const 
{
    return strategy->calculateCost(weight, distance);
}